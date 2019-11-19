`timescale 1ns / 1ps
module buffer_ram_dp#( 
	parameter AW = 15, // Cantidad de bits  de la dirección 
	parameter DW = 8, // cantidad de Bits de los datos 
	parameter   imageFILE= "/home/juandcarrillo/Documents/GitHub/work01-camara-grupo-2/hw/src")
	( 
	//escritura
	input  clk_w, 
	input  [AW-1: 0] addr_in, 
	input  [DW-1: 0] data_in,
	input  regwrite, 
	//lectura
	input  clk_r, 
	input [AW-1: 0] addr_out,
	output reg [DW-1: 0] data_out
	);

// Calcular el número de posiciones totales de memoria 
localparam NPOS = 2 ** AW; // Memoria

 reg [DW-1: 0] ram [0: NPOS-1]; 


//	 escritura  de la memoria port 1 
always @(posedge clk_w) begin 
       if (regwrite == 1) 
             ram[addr_in] <= data_in;
end

//	 Lectura  de la memoria port 2 
always @(posedge clk_r) begin 
		data_out <= ram[addr_out]; 
end


initial begin
	$readmemh(imageFILE, ram);
	ram[15'b111111111111111]=8'b00000011;
	
end

endmodule
