module h_Not(
    input in,
    output wire out
);

    h_Nand nand1(in, in, out);
	 
endmodule
