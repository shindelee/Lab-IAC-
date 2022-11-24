module control_unit #(
    parameter address_width = 7
)(
    input logic      [address_width-1:0]   instr,  //output from Instr Mem
    input logic         EQ,
    output logic        RegWrite,
    output logic       [2:0] ALUctrl,
    output logic        ALUsrc,
    output logic        ImmSrc,
    output logic        PCsrc,
    output logic        MemWrite,
    output logic        ResultSrc
);

always_comb begin
    RegWrite = 1'b0;
    ImmSrc = 1'b0;
    ALUctrl = 3'b000;
    ALUsrc = 1'b0;
    PCsrc = 1'b0; 
    MemWrite = 1'b0;
    ResultSrc = 1'b0;
    if(instr[6:0] == 7'b0010011) // addi
        begin 
        RegWrite = 1'b1;
        ImmSrc = 1'b1;
        ALUctrl = 3'b000;
        ALUsrc = 1'b1;
        end
    if(instr[6:0] == 7'b1100011) // bne
        if(EQ == 1'b0)
        begin
            ImmSrc = 1'b0;
            PCsrc = 1'b1;
        end
    if(instr[6:0] == 7'b0100011) // sw 
        MemWrite = 1'b1;
    if(instr[6:0] == 7'b0000011) // lw 
        ResultSrc = 1'b1;
end 

endmodule
