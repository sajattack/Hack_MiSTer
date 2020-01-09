module Add16(
    input [15:0] a, b,
    output [15:0] out
);

    wire carry1;
    wire carry2;
    wire carry3;
    wire carry4;
    wire carry5;
    wire carry6;
    wire carry7;
    wire carry8;
    wire carry9;
    wire carry10;
    wire carry11;
    wire carry12;
    wire carry13;
    wire carry14;
    wire carry15;
// verilator lint_off UNUSED
    wire garbage;
// verilator lint_on UNUSED

    HalfAdder hadder(a[0], b[0], out[0], carry1);
    FullAdder fadder1(a[1], b[1], carry1, out[1], carry2);
    FullAdder fadder2(a[2], b[2], carry2, out[2], carry3);
    FullAdder fadder3(a[3], b[3], carry3, out[3], carry4);
    FullAdder fadder4(a[4], b[4], carry4, out[4], carry5);
    FullAdder fadder5(a[5], b[5], carry5, out[5], carry6);
    FullAdder fadder6(a[6], b[6], carry6, out[6], carry7);
    FullAdder fadder7(a[7], b[7], carry7, out[7], carry8);
    FullAdder fadder8(a[8], b[8], carry8, out[8], carry9);
    FullAdder fadder9(a[9], b[9], carry9, out[9], carry10);
    FullAdder fadder10(a[10], b[10], carry10, out[10], carry11);
    FullAdder fadder11(a[11], b[11], carry11, out[11], carry12);
    FullAdder fadder12(a[12], b[12], carry12, out[12], carry13);
    FullAdder fadder13(a[13], b[13], carry13, out[13], carry14);
    FullAdder fadder14(a[14], b[14], carry14, out[14], carry15);
    FullAdder fadder15(a[15], b[15], carry15, out[15], garbage);

endmodule
