module se #(
    parameter ADDRESS_WIDTH = 32 // why not 12 bits?
    parameter CONTROL_WIDTH = 4
)(
    input logic     [ADDRESS_WIDTH-1:0]        instr,  // output from Instr Mem
    input logic     [3:0]                      ImmSrc,
    output logic    [ADDRESS_WIDTH-1:0]        ImmOp   // input to PC and ALUsrc mux
);

always_comb begin
    case(ImmScr)
    
    
end
if (ImmScr)
    assign ImmOp[31:12] = 20{instr[address_width-1]};
    assign ImmOp[11:0] = instr[address_width-1:20];
else
    assign ImmOp[31:12] = 20{instr[address_width-1]};
    assign ImmOp[11:0] = {instr[address_width-1], instr[7], instr[30:25], instr[11:8]};

endmodule