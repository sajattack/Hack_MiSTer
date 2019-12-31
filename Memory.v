module Memory(
    input clk,
    input clk_video,
	 input reset,
    input [15:0] in,
    input load,
    input [14:0] address,
    output [15:0] out,
	 
	 input [7:0] hack_scancode,
	 output r, g, b, hsync, vsync, display_on,
	 output [9:0] hpos, vpos
); 

wire bank1, bank2, load_ram, load_screen;
wire [15:0] ram_out, screen_out;
wire [15:0] ram_in, screen_in;
wire [15:0] next_out;
wire garbage = 1'b0;


DMux4Way dmux1(load, address[14:13], bank1, bank2, load_screen, garbage);
h_Or or1(bank1, bank2, load_ram);
RAM16K ram1(clk, ram_in, load_ram, address[13:0], ram_out);
Screen screen1(clk, clk_video, reset, screen_in, load_screen, address[12:0], screen_out, r, g, b, hsync, vsync, display_on, hpos, vpos); 
Mux4Way16 mux1(ram_out, ram_out, screen_out, {8'b0, hack_scancode}, address[14:13], next_out);

assign screen_in = (load && load_screen) ? in : 16'd0;
assign ram_in = (load && !load_screen) ? in : 16'd0;
assign out = (!load) ? next_out: 16'd0;

endmodule
