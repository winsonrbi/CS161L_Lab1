`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:27:27 01/17/2020 
// Design Name: 
// Module Name:    alu 
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
module alu # ( parameter NUMBITS = 8)(
    input wire clk,
    input wire reset,
    input wire [NUMBITS-1:0] A,
    input wire [NUMBITS-1:0] B,
    input wire [2:0]opcode,
	 output reg [NUMBITS:0] carryout_detection,
    output reg [NUMBITS-1:0] result,
	 output reg [NUMBITS-1:0] neg_B,
    output reg carryout,
    output reg overflow,
    output reg zero
    );

	always @(posedge clk) begin
		if(reset == 1) begin
			zero = 1'b0;
			result = 8'b00000000;
			carryout = 1'b0;
			overflow = 1'b0;
		end
		else begin
			case(opcode)
				3'b000: begin //unsigned ADD
					result = A + B;
					carryout_detection = A + B;
					//unsigned does not have overflow
					overflow = 1'b0;
					//calc if there is a carryout or not
					carryout = carryout_detection[NUMBITS];
					if(result == 8'b00000000) begin
						zero = 1'b1;
					end
					else begin
						zero = 1'b0;
					end
				end
				3'b001: begin //signed ADD
					result = A + B;
					carryout_detection = A + B;
					overflow = !(A[NUMBITS-1] ^ B[NUMBITS-1]);
					carryout = carryout_detection[NUMBITS];
					if(result == 8'b00000000) begin
						zero = 1'b1;
					end
					else begin
						zero = 1'b0;
					end
				end
				
				3'b010: begin //unsigned subtraction
					result = A-B;
					carryout = 1'b0;
					overflow = 1'b0;
					if(result == 8'b00000000) begin
						zero = 1'b1;
					end
					else begin
						zero = 1'b0;
					end
				end
				
				3'b011: begin //signed subtraction
					neg_B = ~B;
					neg_B = neg_B + 1;
					result = A+neg_B;
					carryout = 1'b0;
					if(A[NUMBITS-1] ^ B[NUMBITS-1])begin
						if(result[NUMBITS-1] == B[NUMBITS-1])begin
							overflow = 1'b1;
						end
						else begin
							overflow = 1'b0;
						end
					end
					else begin
						overflow = 1'b0;
					end
					if(result == 8'b00000000) begin
						zero = 1'b1;
					end
					else begin
						zero = 1'b0;
					end
				end
				
				3'b100: begin //bitwise AND
					result = A&B;
					carryout = 1'b0;
					overflow = 1'b0;
					if(result == 8'b00000000) begin
						zero = 1'b1;
					end
					else begin
						zero = 1'b0;
					end
				end
				
				
				default: $display("Opcode Error");
			endcase
		end
	end
endmodule