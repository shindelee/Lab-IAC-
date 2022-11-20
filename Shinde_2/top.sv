module alu #(
    DATA_WIDTH = 32,
    ADDRESS_WIDTH = 5
)(
    // interface signals
    input logic                                      clk,
    input logic        [ADDRESS_WIDTH-1:0]           rs1,           
    input logic        [ADDRESS_WIDTH-1:0]           rs2,      
    input logic        [ADDRESS_WIDTH-1:0]           rd,
    input logic                                      RegWrite,
    input logic                                      ALUsrc,   
    input logic                                      ALUCtrl,
    input logic        [DATA_WIDTH-1:0]              ImmOp,
    output logic                                     eq,
    output logic       [DATA_WIDTH-1:0]              a0
);

logic ALUout;
logic ALUop1;
logic ALUop2;
logic regOp2;

regfile RegFile (
    .clk(clk),
    .addr1(rs1),
    .addr2(rs2),
    .addr3(rd),
    .we3(RegWrite),
    .wd3(ALUout),
    .rd1(ALUop1),
    .rd2(regOp2),
    .a0(a0)
);

alu ALU(
    .ALUop1(ALUop1),
    .ALUop2(ALUop2),
    .ALUCtrl(ALUCtrl),
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