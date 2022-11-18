module sign_extend #(
    parameter address_width = 32
)(
    input logic     [address_width-1:0]        instr,  //output from Instr Mem
    input logic                                 ImmSrc,
    output logic    [address_width-1:0]         ImmOp   //input to PC and ALUsrc mux
);

if (ImmScr)
    assign ImmOp[31:12] = 20{instr[address_width-1]};
    assign ImmOp[11:0] = instr[address_width-1:20];
else
    assign ImmOp[31:12] = 20{instr[address_width-1]};
    assign ImmOp[11:0] = {instr[address_width-1], instr[7], instr[30:25], instr[11:8]};

endmodule
