module And16 (
    input [15:0] a,
    input [15:0] b,
    output [15:0] out
);

    _And and0(a[0], b[0], out[0]);
    _And and1(a[1], b[1], out[1]);
    _And and2(a[2], b[2], out[2]);
    _And and3(a[3], b[3], out[3]);
    _And and4(a[4], b[4], out[4]);
    _And and5(a[5], b[5], out[5]);
    _And and6(a[6], b[6], out[6]);
    _And and7(a[7], b[7], out[7]);
    _And and8(a[8], b[8], out[8]);
    _And and9(a[9], b[9], out[9]);
    _And and10(a[10], b[10], out[10]);
    _And and11(a[11], b[11], out[11]);
    _And and12(a[12], b[12], out[12]);
    _And and13(a[13], b[13], out[13]);
    _And and14(a[14], b[14], out[14]);
    _And and15(a[15], b[15], out[15]);

endmodule
