module _Not(
    input in,
    output wire out
);

    _Nand nand1(in, in, out);
	 
endmodule