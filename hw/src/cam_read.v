`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:14:22 12/02/2019 
// Design Name: 
// Module Name:    cam_read 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cam_read #(
		parameter AW = 15 // Cantidad de bits  de la direcci�n 
		)(
		input pclk,
		input rst,
		input vsync,
		input href,
		input [7:0] px_data,

		output reg [AW-1:0] mem_px_addr = -1 ,
		output reg[7:0]  mem_px_data,
		output reg px_wr );

	reg  [1:0] FSM_state = 0; //Dos estados =  00: WAIT_FRAME_START &  01: ROW_CAPTURE & 11 DATA_OUT_RANGE EN LA FILA & 10: DONE ha enviado la imagen de (160x120) pero sigue recibiendo porque la camara envia (480x260)
    reg pixel_half = 0; //indica 0:medio pixel y 1 :pixel completo 
	reg [AW:0] temp_rgb  ; //registro temporal para guardar pixel completo, asumiendo RGB555
	reg [10:0] widthimage = -1 ; // registro que lleva el conteo del ancho de pixeles enviados (en 160 debe dentenerse)
	reg [10:0] lengthimage = -1; // registro que lleva la cuenta de filas de pixeles enviadas (en 120 debe detenerse)

	localparam Maxwidthimage = 176;  // tamaño maximo del ancho de la imagen 
	localparam Maxlengthimage = 140;    // tamaño maximo en largo de la imagen
	localparam WAIT_FRAME_START = 0;
	localparam ROW_CAPTURE = 1;
	localparam DATA_OUT_RANGE = 3;
	localparam DONE =  2;
	initial begin
	mem_px_addr <= -1 ;
	end
	
	always @(pclk)
	begin 
	case(FSM_state)

	DONE:begin // ENVIE TODA LA IAMGEN(160x120) A LA MEMORIA , ESPERO HASATA OTRA IMAGEN
		FSM_state <= (vsync==0)? DONE : ROW_CAPTURE;
		px_wr <= 0;
 		mem_px_addr <= 0;
			lengthimage <= 0;
	end
	DATA_OUT_RANGE : begin //  href esta en alto pero ya tome los 176 pixeles , el resto no lo guardo en memoria
	 FSM_state <= (href==1)?  DATA_OUT_RANGE : WAIT_FRAME_START ;
	 widthimage <= 0 ;
	 px_wr <= 0;
	 
	end
	
	WAIT_FRAME_START: begin //wait for href, conteo de href 
	   FSM_state <= (href==0 || vsync == 1) ? WAIT_FRAME_START : ROW_CAPTURE;
	   px_wr <= 0 ;
	   	
	end
	/*Como aparece en el datasheet cuando vsync este bajo y href este alto , me estan enviando datos validos
	en los flancos de subida de (pclk) leo 1byte , cada dos flancos leo el pixel en RGB565, 
	*/
	ROW_CAPTURE: begin 
	   	FSM_state <= (vsync==0 && href==1)? ROW_CAPTURE : WAIT_FRAME_START;  
		if (pclk ==1) begin
		pixel_half <= ~ pixel_half;
			if (pixel_half == 0) begin
				temp_rgb [15:8] = px_data;
				px_wr <= 0;
			end else begin
			 	mem_px_addr <= mem_px_addr + 1;
				temp_rgb [7:0] = px_data;
				mem_px_data = {temp_rgb[15:13], temp_rgb[10:8],temp_rgb[4:3]}; //RGB565 a RGB332
				//mem_px_data <= 8'b11100000;
				px_wr <= 1;
				
				widthimage <= widthimage + 1 ;
						if (widthimage  == Maxwidthimage-1) begin
						FSM_state <= DATA_OUT_RANGE ;
						lengthimage <= lengthimage + 1 ;
							if(lengthimage == Maxlengthimage-1)begin
							FSM_state <= DONE;
								end	
						end 
						
					end
					
	   	end
	end		
	endcase
end
 



/********************************************************************************

Por favor colocar en este archivo el desarrollo realizado por el grupo para la 
captura de datos de la camara 

debe tener en cuenta el nombre de las entradas  y salidad propuestas 

********************************************************************************/

endmodule

/*****************************************************************
	OBJETIVO DE ESTE MÓDULO:
	-Transformar los datos de entrada de RGB565 a RGB332
	-Enviar los datos transformados a la dpram
	---> este módulo solo interactua entre la cámara y la dpram <---

	**Cada ciclo del reloj pclk se envía un byte (es el mismo xclk)
	**El reloj href se pone en ALTO durante el envío de la fila (640x2 pclk)
	**hsync mantiene una señal con frecuencia estable dentro de la cual está 
	cada fila, de forma que se puedan sincronizar
	**vsync se pone en alto al inicio del frame y al final del frame

******************************************************************/