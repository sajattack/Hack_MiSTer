module verilator_top (
    input clk,
    input clk_video,
    input reset,
    input [7:0] hack_scancode,
    output r,
    output g,
    output b,
    output hsync,
    output vsync,
    output display_on,
    output [9:0] hpos,
    output [9:0] vpos,
    output [14:0] pc,
    output [15:0] instruction
);

  wire [15:0] memOut, outM;
  wire [14:0] addressM;
  wire writeM;

  CPU cpu (
      clk,
      memOut,
      instruction,
      reset,
      outM,
      writeM,
      addressM,
      pc
  );
  ROM32K rom0 (
      clk,
      pc,
      instruction
  );

  Memory mem (
      clk,
      clk_video,
      reset,
      outM,
      writeM,
      addressM,
      memOut,
      hack_scancode,
      r,
      g,
      b,
      hsync,
      vsync,
      display_on,
      hpos,
      vpos
  );
  //Keyboard keyboard(clk, ps2_key, hack_scancode);

endmodule
