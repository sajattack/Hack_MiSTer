module HalfAdder(
    input a, b,
    output sum, carry
);

    _Xor _xor(a, b, sum);
    _And _and(a, b, carry);


endmodule