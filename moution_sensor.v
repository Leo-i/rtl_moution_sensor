module moution_sensor(input CLOCK_50, input [35:0] GPIO_0, output reg [7:0] LEDG, output reg [9:0] LEDR);

//reg [25:0] timeout = 0;
//assign 

always@(posedge CLOCK_50) begin
	if(GPIO_0[0]) begin LEDG[7:0] = 8'b11111111; LEDR[9:0] = 10'b0000000000; end
	else begin LEDR[9:0] = 10'b1111111111; LEDG[7:0] = 8'b00000000; end
end

endmodule
