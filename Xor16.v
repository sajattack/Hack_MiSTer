module Xor16 (
    input [15:0] a,
    input [15:0] b,
    output [15:0] out
);

   _Xor xor0(a[0], b[0], out[0]);
   _Xor xor1(a[1], b[1], out[1]);
   _Xor xor2(a[2], b[2], out[2]);
   _Xor xor3(a[3], b[3], out[3]);
   _Xor xor4(a[4], b[4], out[4]);
   _Xor xor5(a[5], b[5], out[5]);
   _Xor xor6(a[6], b[6], out[6]);
   _Xor xor7(a[7], b[7], out[7]);
   _Xor xor8(a[8], b[8], out[8]);
   _Xor xor9(a[9], b[9], out[9]);
   _Xor xor10(a[10], b[10], out[10]);
   _Xor xor11(a[11], b[11], out[11]);
   _Xor xor12(a[12], b[12], out[12]);
   _Xor xor13(a[13], b[13], out[13]);
   _Xor xor14(a[14], b[14], out[14]);
   _Xor xor15(a[15], b[15], out[15]);

endmodule