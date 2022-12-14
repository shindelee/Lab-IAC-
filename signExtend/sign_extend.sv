module sign_extend #(
    parameter address_width = 32
)(
    input logic     [address_width-1:0]        instr,  //output from Instr Mem
    input logic     [2:0]                      ImmSrc,
    output logic    [address_width-1:0]        ImmOp   //input to PC and ALUsrc mux
);

always_comb begin
    if (ImmScr == 3b'000)begin
        assign ImmOp[31:12] = 20{instr[address_width-1]};
        assign ImmOp[11:0] = instr[address_width-1:20];
    end
    else if (ImmScr == 3b'010) begin
        assign ImmOp[31:12] = 20{instr[address_width-1]};
        assign ImmOp[11:0] = {instr[7], instr[30:25], instr[11:8], 1'b0};
    end
end

endmodule
