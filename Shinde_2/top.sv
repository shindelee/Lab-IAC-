module alu #(
    DATA_WIDTH = 32,
    ADDRESS_WIDTH = 5
)(
    // interface signals
    input logic                                      clk,
    input logic        [ADDRESS_WIDTH-1:0]           rs1,           // rs1
    input logic        [ADDRESS_WIDTH-1:0]           rs2,      
    input logic        [ADDRESS_WIDTH-1:0]           rd,
    input logic                                      RegWrite,      // ALUout
    input logic                                      ALUctrl,
    input logic                                      ALUsrc,
    input logic        [DATA_WIDTH-1:0]              ImmOp,
    output logic       [DATA_WIDTH-1:0]              a0
);

logic ALUout;
logic ALUop1;
logic ALUop2;
logic eq;
logic regOp2;

regfile RegFile (
    .clk(clk),
    .addr1(rs1),
    .addr2(rs2),
    .addr3(rd),
    .we3(RegWrite),
    .wd3(ALUout),
    .rd1(ALUop1),
    .rd2(ALUop2),
    .a0(a0)
);

alu ALU(
    .ALUop1(ALUop1),
    .ALUop2(ALUop2),
    .ALUControl(ALUctrl),
    .eq(eq),
    .out(ALUout)
);

mux MUX(
    .d0(regOp2),
    .d1(ImmOp),
    .s(ALUsrc),
    .out(ALUop2)
);

endmodule