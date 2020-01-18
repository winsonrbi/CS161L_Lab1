`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:42:57 01/17/2020
// Design Name:   alu
// Module Name:   /home/csmajs/wbi002/lab1/lab1_tb.v
// Project Name:  lab1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab1_tb;
	parameter NUMBITS = 8;
	
	// Inputs
	reg clk;
	reg reset;
	reg [NUMBITS-1:0] A;
	reg [NUMBITS-1:0] B;
	reg [2:0] opcode;

	// Outputs
	wire [NUMBITS-1:0] result;
	reg [NUMBITS-1:0] R;
	wire carryout;
	wire overflow;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.clk(clk), 
		.reset(reset), 
		.A(A), 
		.B(B), 
		.opcode(opcode), 
		.result(result), 
		.carryout(carryout), 
		.overflow(overflow), 
		.zero(zero)
	);
	initial begin
		clk = 0; reset = 1; #50 ;
		clk = 1; reset = 1; #50 ;
		clk = 0; reset = 0; #50 ;
		clk = 1; reset = 0; #50 ;
		
		forever begin
			clk = ~clk; #50;
		end
	end
	
	initial begin
		// Initialize Inputs
		$display("TC11 Unsigned Add ");
		opcode = 3'b000 ;
		A = 8'hFF ; //Checking for edge case of carryout
   	B = 8'h01 ;
		R = 8'h00 ; 
	   #500 ; // Wait 
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b1) $display ("Zero  is wrong");
		if (carryout != 1'b1) $display ("Carryout is wrong");
		if (overflow != 1'b0) $display  ("Overflow is wrong");

		$display("TC12 Unsigned ADD");
		opcode = 3'b000;
		A = 8'hFF; //Adding two largest numbers possible
		B = 8'hFF;
		R = 8'hFE;
		#500;
		if(R != result) $display ("Result is wrong");
		if(zero != 1'b0) $display("Zero is wrong");
		if(carryout != 1'b1) $display("Carryout is wrong");
		if (overflow != 1'b0) $display  ("Overflow is wrong");
		$display("TC13 Unsigned ADD");
		opcode = 3'b000;
		A = 8'h00;// Adding two zeros
		B = 8'h00;
		R = 8'h00;
		#500;
		if(R != result) $display ("Result is wrong");
		if(zero != 1'b1) $display("Zero is wrong");
		if(carryout != 1'b0) $display("Carryout is wrong");
		if (overflow != 1'b0) $display  ("Overflow is wrong");
		// ---------------------------------------------
		// Testing unsigned subs 
		// --------------------------------------------- 
		$display("TC21 Unsigned Sub");
		opcode = 3'b010; //Substracting Two Largest Numbers Possible
		A = 8'hFF;
		B = 8'hFF;
		R = 8'h00;
		#500;
		if(R != result) $display ("Result is wrong");
		if(zero != 1'b1) $display("Zero is wrong");
		if(carryout != 1'b0) $display("Carryout is wrong");

		$display("TC22 Unsigned Sub");
		opcode = 3'b010; //Subtracting zero with itself
		A = 8'h00;
		B = 8'h00;
		R = 8'h00;
		#500;
		if(R != result) $display ("Result is wrong");
		if(zero != 1'b1) $display("Zero is wrong");
		if(carryout != 1'b0) $display("Carryout is wrong");

		$display("TC23 Unsigned Sub");
		opcode = 3'b010;
		A = 8'hFF; //Subtracting a number with zero
		B = 8'h00;
		R = 8'hFF;
		#500;
		if(R != result) $display ("Result is wrong");
		if(zero != 1'b0) $display("Zero is wrong");
		if(carryout != 1'b0) $display("Carryout is wrong");
		// ---------------------------------------------
		// Testing signed adds 
		// --------------------------------------------- 
		$display("TC31 Signed Addition");
		opcode = 3'b001; //Adding two large negative numbers two check for overflow
		A = 8'h80;
		B = 8'h80;
		R = 8'h00;
		#500;
		if(R != result) $display ("Result is wrong");
		if(zero != 1'b1) $display("Zero is wrong");
		if(carryout != 1'b1) $display("Carryout is wrong");
		if(overflow != 1'b1) $display("Overflow is wrong");
		
		$display("TC32 Signed Addition");
		opcode = 3'b001; //Adding two large positive numbers two check for overflow
		A = 8'h7F;
		B = 8'h7F;
		R = 8'hFE;
		#500;
		if(R != result) $display ("Result is wrong");
		if(zero != 1'b0) $display("Zero is wrong");
		if(carryout != 1'b0) $display("Carryout is wrong");	
		if(overflow != 1'b1) $display("Overflow is wrong");
		// ---------------------------------------------
		// Testing signed subs 
		// --------------------------------------------- 
		$display("TC41 Signed Subtraction");
		opcode = 3'b011; //Subtracting a Large positive number with a negative number that causes overflow
		A = 8'h7F;
		B = 8'h80;
		R = 8'hFF;
		#500;
		if(R != result) $display ("Result is wrong");
		if(zero != 1'b0) $display("Zero is wrong");
		if(carryout != 1'b0) $display("Carryout is wrong");
		if(overflow != 1'b1) $display("Overflow is wrong");

		$display("TC42 Signed Subtraction");
		opcode = 3'b011; //Subtracting large negative number with large positive number to check for overflow
		A = 8'h80;
		B = 8'h7F;
		R = 8'h01;
		#500;
		if(R != result) $display ("Result is wrong");
		if(zero != 1'b0) $display("Zero is wrong");
		if(carryout != 1'b0) $display("Carryout is wrong");	
		if(overflow != 1'b1) $display("Overflow is wrong");
		// ---------------------------------------------
		// Testing ANDS 
		// ---------------------------------------------
		$display("TC51 AND Test");
		opcode = 3'b100;
		A = 8'hFF;
		B = 8'h00;
		R = 8'h00;
		// Wait 100 ns for global reset to finish
		#500;
      if(R != result) $display("Result is wrong");
		if(zero != 1'b1) $display("Zero is wrong");
		if(carryout != 1'b0) $display("Carryout is wrong");
		if(overflow != 1'b0) $display("Overflow is wrong");

		$display("TC52 AND Testing");
		opcode = 3'b100; //ANDings all 1's with all 1's
		A = 8'hFF;
		B = 8'hFF;
		R = 8'hFF;
		// Wait 100 ns for global reset to finish
		#500;
		if(R != result) $display ("Result is wrong");
		if(zero != 1'b0) $display("Zero is wrong");
		if(carryout != 1'b0) $display("Carryout is wrong");	
		if(overflow != 1'b0) $display("Overflow is wrong");
		//---
		$display("TC53 AND Testing");
		opcode = 3'b100; //ANDings all 0's with all 0's
		A = 8'h00;
		B = 8'h00;
		R = 8'h00;
		#500;
		if(R != result) $display ("Result is wrong");
		if(zero != 1'b1) $display("Zero is wrong");
		if(carryout != 1'b0) $display("Carryout is wrong");	
		if(overflow != 1'b0) $display("Overflow is wrong");
		
		$display("Testing Complete");
	end
      
endmodule

