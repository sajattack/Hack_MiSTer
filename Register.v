module Register (
    input clk,
    input [15:0] in,
    input load,
    output reg [15:0] out
);

    always @(posedge clk) begin
        if (load)
            out <= in;
    end 

endmodule
