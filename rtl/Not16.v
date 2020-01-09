module Not16 (
    input [15:0] in,
    output wire [15:0] out
);

    h_Not not0(in[0], out[0]);
    h_Not not1(in[1], out[1]);
    h_Not not2(in[2], out[2]);
    h_Not not3(in[3], out[3]);
    h_Not not4(in[4], out[4]);
    h_Not not5(in[5], out[5]);
    h_Not not6(in[6], out[6]);
    h_Not not7(in[7], out[7]);
    h_Not not8(in[8], out[8]);
    h_Not not9(in[9], out[9]);
    h_Not not10(in[10], out[10]);
    h_Not not11(in[11], out[11]);
    h_Not not12(in[12], out[12]);
    h_Not not13(in[13], out[13]);
    h_Not not14(in[14], out[14]);
    h_Not not15(in[15], out[15]);


endmodule
