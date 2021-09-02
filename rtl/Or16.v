module Or16 (
    input  [15:0] a,
    input  [15:0] b,
    output [15:0] out
);

  _Or or0 (
      a[0],
      b[0],
      out[0]
  );
  _Or or1 (
      a[1],
      b[1],
      out[1]
  );
  _Or or2 (
      a[2],
      b[2],
      out[2]
  );
  _Or or3 (
      a[3],
      b[3],
      out[3]
  );
  _Or or4 (
      a[4],
      b[4],
      out[4]
  );
  _Or or5 (
      a[5],
      b[5],
      out[5]
  );
  _Or or6 (
      a[6],
      b[6],
      out[6]
  );
  _Or or7 (
      a[7],
      b[7],
      out[7]
  );
  _Or or8 (
      a[8],
      b[8],
      out[8]
  );
  _Or or9 (
      a[9],
      b[9],
      out[9]
  );
  _Or or10 (
      a[10],
      b[10],
      out[10]
  );
  _Or or11 (
      a[11],
      b[11],
      out[11]
  );
  _Or or12 (
      a[12],
      b[12],
      out[12]
  );
  _Or or13 (
      a[13],
      b[13],
      out[13]
  );
  _Or or14 (
      a[14],
      b[14],
      out[14]
  );
  _Or or15 (
      a[15],
      b[15],
      out[15]
  );

endmodule
