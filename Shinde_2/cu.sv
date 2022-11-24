module cu #(
    parameter ADDRESS_WIDTH = 32 
)(
    input logic      [ADDRESS_WIDTH-1:0]   instr,  
    input logic                               EQ,
    output logic                        RegWrite,
    output logic        [2:0]            ALUctrl,
    output logic                          ALUsrc,
    output logic                          ImmSrc,
    output logic                           PCsrc
);

always_comb begin
    RegWrite = 1'b0;
    ALUctrl = 3'b000;
    ImmSrc = 1'b0;
    ALUsrc = 1'b0;
    PCsrc = 1'b0;
    
    // rd1 and rd2
    if (instr[6:0] == 7'b0110011)
        RegWrite = 1'b1;
        ImmSrc = 1'b0;
        ALUctrl = 3'b000;
        ALUsrc = 1'b0;
        
    // rd1 and sign_extend
    if(instr[6:0] == 7'b0010011) 
        RegWrite = 1'b1;
        ImmSrc = 1'b1;
        ALUctrl = 3'b000;
        ALUsrc = 1'b1;

    // not equal
    if(instr[6:0] == 7'b1100011)
        if(EQ != 1)
            ImmSrc = 1'b0; 
            PCsrc = 1'b1;    
end

endmodule