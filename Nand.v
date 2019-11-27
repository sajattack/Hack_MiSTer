module _Nand (
    input a, b,
    output out
);

    assign out = ~(a & b);

endmodule
