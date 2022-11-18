module sign_extend #(
    parameter address_width = 32
)(
    input logic         instr,  //output from Instr Mem
    input logic         EQ,
    output logic        RegWrite,
    output logic        ALUctrl,
    output logic        ALUsrc,
    output logic        ImmSrc,
    output logic        PCsrc
);