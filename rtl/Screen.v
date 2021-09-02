// 512 x 256 black and white display

module Screen (
    input clk,
    input clk_video,
    input reset,
    input [15:0] in,
    input load,
    input [12:0] address,
    output [15:0] out,
    output reg r,
    g,
    b,
    output hsync,
    vsync,
    display_on,
    output [9:0] hpos,
    vpos
);


  reg [15:0] vram[8192]  /*verilator public*/;

  HVSyncGenerator hvsync (
      clk_video,
      reset,
      hsync,
      vsync,
      display_on,
      hpos,
      vpos
  );

  reg [12:0] vindex;  // index into line array
  reg [15:0] vshift;  // shift register with current word to output

  always @(posedge clk_video) begin
    if (display_on) begin
      if (0 == hpos[3:0]) begin
        vshift <= vram[vindex];
        vindex <= vindex + 13'd1;
      end else vshift <= vshift >> 1;
      r <= vshift[0];
      g <= vshift[0];
      b <= vshift[0];
    end else begin
      r <= 1'd0;
      g <= 1'd0;
      b <= 1'd0;
      if (vsync) vindex <= 0;  // reset vindex every frame
    end
  end

  always @(posedge clk) begin
    if (load) vram[address] <= in;
  end

  assign out = vram[address];


endmodule

