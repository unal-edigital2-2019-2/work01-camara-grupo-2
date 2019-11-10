module data_catcher_TB;

	//inputs
	reg [7:0] data;
	reg href; 				
	reg pclk;
	reg vsync;
	//outputs
	wire [14:0] DP_RAM_addr_out; 
	wire [7:0] DP_RAM_data_out;
	wire DP_RAM_regW;


	data_catcher dc (
	.data(data),
	.href(href),
	.pclk(pclk),
	.vsync(vsync),
	.DP_RAM_addr_out(DP_RAM_addr_out),
	.DP_RAM_data_out(DP_RAM_data_out),
	.DP_RAM_regW(DP_RAM_regW)
	);
	
	initial begin
	//DP_RAM_addr_out = 0;
	pclk = 0;
	vsync = 0;
	href = 0;
	data = 0;
	#5;
	#50;

	vsync = 1;
	#10;
	vsync = 0;
	#10;
	href = 1; 
	data = 8'b11011011;
	#10; 
	data = 8'b01101101;
	#10;
	data = 8'b00100001; //1
	#10;
	data = 8'b00001000;
	#10;
	data = 8'b01000010; //2
	#10;
	data = 8'b00010000;
	#10;
	data = 8'b01100011; //3
	#10;
	data = 8'b00011000;
	#10;
	data = 8'b10000100; //4
	#10;
	data = 8'b00000000;
	#10;
	data = 8'b10100101; //5
	#10;
	data = 8'b00001000;
	#10;
	href = 0;
	#10;
	vsync = 0;
	end
	
	always pclk = #5 ~pclk;

	initial begin: TEST_CASE
	$dumpfile("data_catcher_TB.vcd");
	$dumpvars(-1, dc);
	#1000000 $finish;
	end	

endmodule
