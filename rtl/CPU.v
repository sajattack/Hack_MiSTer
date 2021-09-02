module CPU (
    input clk,
    input [15:0] inM,
    romOut,
    input reset,
    output reg [15:0] outM,
    output reg writeM,
    output reg [14:0] addressM,
    output reg [14:0] pc
);

  wire cInst, aDest, zr, ng;
  reg  [15:0] aluX;
  wire [15:0] aluY;
  reg [15:0] aReg, dReg;
  wire [15:0] aluOut;
  reg [15:0] instruction;

  wire aInst = instruction[15] == 0;

  h_Not not1 (
      aInst,
      cInst
  );

  h_And and2 (
      cInst,
      instruction[5],
      aDest
  );
  wire dDest = cInst & instruction[4];
  wire mDest = cInst & instruction[3];

  Mux16 mux2 (
      aReg,
      inM,
      instruction[12],
      aluY
  );

  ALU alu (
      aluX,
      aluY,
      instruction[11],
      instruction[10],
      instruction[9],
      instruction[8],
      instruction[7],
      instruction[6],
      zr,
      ng,
      aluOut
  );


  wire jump = cInst & ((ng & instruction[2]) | (zr & instruction[1]) | ((!(zr | ng)) & instruction[0]));

  localparam [4:0] EXECUTE = 5'b00001;
  localparam [4:0] SETXY = 5'b00010;
  localparam [4:0] SET_DEST = 5'b00100;
  localparam [4:0] SET_PC = 5'b01000;
  localparam [4:0] FETCH = 5'b10000;

  reg [4:0] state;

  initial begin
    pc = 0;
    writeM = 0;
    addressM = 0;
    outM = 0;
    aluX = 0;
    aReg = 0;
    dReg = 0;
    state = FETCH;
  end

  always @(posedge clk or posedge reset) begin
    if (reset) begin
      pc <= 0;
      writeM <= 0;
      addressM <= 0;
      outM <= 0;
      aluX <= 0;
      aReg <= 0;
      dReg <= 0;
      state <= FETCH;
    end else begin
      case (state)
        FETCH: begin
          instruction <= romOut;
          state <= EXECUTE;
        end
        EXECUTE: begin
          if (aInst) begin
            aReg  <= instruction;
            state <= SET_PC;
          end else begin
            addressM <= aReg[14:0];
            state <= SETXY;
          end
        end
        SETXY: begin
          aluX  <= dReg;
          state <= SET_DEST;
        end
        SET_DEST: begin
          if (mDest) begin
            outM   <= aluOut;
            writeM <= 1;
          end
          if (aDest) aReg <= aluOut;
          if (dDest) dReg <= aluOut;
          state <= SET_PC;
        end
        SET_PC: begin
          writeM <= 0;
          if (jump) pc <= aReg[14:0];
          else pc <= pc + 15'd1;
          state <= FETCH;
        end
        default: begin
          pc <= 0;
          writeM <= 0;
          addressM <= 0;
          outM <= 0;
          aluX <= 0;
          aReg <= 0;
          dReg <= 0;
          state <= FETCH;
        end
      endcase
    end
  end

endmodule
