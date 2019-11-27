module _And (
    input a,
    input b,
    output out
);

    wire temp;
    _Nand _nand (a, b, temp);
    _Not _not (temp, out);

endmodule
