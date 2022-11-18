module alu #(
    DATA_WIDTH = 32
)(
    // interface signals
    input logic        [DATA_WIDTH-1:0]         ALUop1,
    input logic        [DATA_WIDTH-1:0]         ALUop2,       // rs1
    input logic        [2:0]                    ALUControl,      
    output logic                                eq,
    output logic                                out           // ALUout
);

    always_comb begin
        if(ALUControl == 3'b000)
            out = ALUop1 + ALUop2
        
        if(ALUop1 == ALUop2)
            eq = 1
        else 
            eq = 0
        
    end

endmodule
