module Inc16(
    input [15:0] in,
    output [15:0] out
);
	reg [15:0] one = 16'd1;	
	Add16 add16(
		.a(in), 
		.b(one),
		.out(out)
	);

endmodule
