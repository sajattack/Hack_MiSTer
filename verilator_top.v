module verilator_top(
    input clk,
    input clk_video,
    input reset,
    output r, g, b, hsync, vsync, display_on,
    output [14:0] pc,
    output [15:0] instruction
);

wire [15:0] ps2_ascii = 16'h30;

wire [15:0] memOut, outM;
wire [14:0] addressM;
wire writeM;

CPU cpu(clk, memOut, instruction, reset, outM, writeM, addressM, pc);
ROM32K rom0(pc, instruction);
Memory mem(clk, clk_video, reset, outM, writeM, addressM, memOut, ps2_ascii, r, g, b, hsync, vsync, display_on);

endmodule
