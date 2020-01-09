module FullAdder(
    input a, b, c,
    output sum, carry
);

   wire halfsum;
   wire halfcarry1;
   wire halfcarry2;

   HalfAdder hadder1(a, b, halfsum, halfcarry1);
   HalfAdder hadder2(halfsum, c, sum, halfcarry2);
   h_Xor xor1(halfcarry1, halfcarry2, carry);

endmodule
