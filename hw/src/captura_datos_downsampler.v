module captura_datos_downsampler (
	input [7:0] data,
	input href, 				
	input pclk,
	input vsync,
	
	output reg [14:0] DP_RAM_addr_out = 0,
	output reg [7:0] DP_RAM_data_out,
	output reg DP_RAM_regW //autoriza escritura en la dpram
);

	reg  [1:0] FSM_state = 0; //CUATRO estados =  00: WAIT_FRAME_START &  01: ROW_CAPTURE & 11 DATA_OUT_RANGE EN LA FILA & 10: DONE ha enviado la imagen de (160x120) pero sigue recibiendo porque la camara envia (480x260)
    reg pixel_half = 0; //indica 0:medio pixel y 1 :pixel completo 
	reg [15:0] temp_rgb; //registro temporal para guardar pixel completo, asumiendo RGB555
	reg [10:0] widthimage = 0 ; // registro que lleva el conteo del ancho de pixeles enviados (en 160 debe dentenerse)
	reg [10:0] lengthimage = 0; // registro que lleva la cuenta de filas de pixeles enviadas (en 120 debe detenerse)

	localparam Maxwidthimage = 16;  // tamaño maximo del ancho de la imagen 
	localparam Maxlengthimage = 12;    // tamaño maximo en largo de la imagen
	localparam WAIT_FRAME_START = 0;
	localparam ROW_CAPTURE = 1;
	localparam DATA_OUT_RANGE = 3;
	localparam DONE =  2;
	
	
	always @(posedge pclk)
	begin 

	case(FSM_state)

	DONE:begin // ENVIE TODA LA IAMGEN(160x120) A LA MEMORIA , ESPERO HASATA OTRA IMAGEN
		FSM_state <= (!vsync)? DONE : WAIT_FRAME_START;
		DP_RAM_addr_out <= 0;
			lengthimage <= 0;
	end
	DATA_OUT_RANGE : begin //  me estan enviadno datos que estan fueran del rango (160x120)no debo enviarlos a la memoria
	 FSM_state <= (!href)?  DATA_OUT_RANGE : WAIT_FRAME_START ;
	 widthimage <= 0 ;
	 DP_RAM_regW <= 0;
	 
	end
	WAIT_FRAME_START: begin //wait for VSYNC
	   FSM_state <= (!vsync) ? ROW_CAPTURE : WAIT_FRAME_START;
	   pixel_half <= 0;
	end
	
	ROW_CAPTURE: begin 
	   	FSM_state <= (vsync)? WAIT_FRAME_START : ROW_CAPTURE; 
		if (pclk == 1) begin
		pixel_half <= ~ pixel_half;
		
			if (pixel_half == 0) begin
				temp_rgb [15:8] = data;
				DP_RAM_regW <= 0;
			end else begin
				 DP_RAM_addr_out <= DP_RAM_addr_out + 1;
				temp_rgb [7:0] = data;
				DP_RAM_data_out = {temp_rgb[15:13], temp_rgb[10:8],temp_rgb[4:3]}; //RGB565 a RGB332
				DP_RAM_regW <= 1;
				widthimage <= widthimage + 1 ;
				if (widthimage  == Maxwidthimage-1) begin
						FSM_state <= DATA_OUT_RANGE ;
				end 
				if ( href ) begin
					lengthimage <= lengthimage +1;
					if(lengthimage == Maxlengthimage-1)begin
					 FSM_state <= DONE;
					end

				end 
				
			end

	   	end
	end
	
	endcase
/*
	if (vsync == 1) begin
			DP_RAM_addr_out <= 0;
			lengthimage <= 0;
		end
*/
	end
	
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