module data_catcher (
	input [7:0] data,
	input href, 				
	input pclk,
	input vsync,
	
	output reg [14:0] DP_RAM_addr_out = 0,
	output reg [7:0] DP_RAM_data_out,
	output reg DP_RAM_regW //autoriza escritura en la dpram
);

	reg [1:0] FSM_state = 0; //dos estados: WAIT_FRAME_START & ROW_CAPTURE
    reg pixel_half = 0; //indica si va almacenado medio pixel (1 Byte) o uno completo
	reg [15:0] temp_rgb; //registro temporal para guardar pixel completo, asumiendo RGB565
	
	localparam MAX_MEMORY = 2 ** 15; //tamaño total de la dpram
	localparam WAIT_FRAME_START = 0;
	localparam ROW_CAPTURE = 1;
	
	
	always @(posedge pclk)
	begin 
	
	case(FSM_state)
	
	WAIT_FRAME_START: begin //wait for VSYNC
	   FSM_state <= (!vsync) ? ROW_CAPTURE : WAIT_FRAME_START;
	   pixel_half <= 0;
	end
	
	ROW_CAPTURE: begin 
	   	FSM_state <= vsync ? WAIT_FRAME_START : ROW_CAPTURE; 
		if (href) begin
		pixel_half <= ~ pixel_half;
		
			if (pixel_half == 0) begin
				temp_rgb [15:8] = data;
				DP_RAM_regW <= 0;
			end else begin
				DP_RAM_addr_out <= DP_RAM_addr_out + 1;
				temp_rgb [7:0] = data;
				DP_RAM_data_out = {temp_rgb[15:13], temp_rgb[10:8],temp_rgb[4:3]}; //RGB565 a RGB332
				DP_RAM_regW <= 1;
				
			end

	   	end
	end
	
	endcase

	if (DP_RAM_addr_out == MAX_MEMORY - 1) begin
			DP_RAM_addr_out <= 0;
		end

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