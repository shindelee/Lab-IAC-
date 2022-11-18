module blue_part #(
    parameter address_width = 32
)(
    input logic                            PCsrc, // output from control unit
    input logic                            clk,
    input logic                            rst,
    input logic [address_width-1:0]        ImmOp, // output from "sign extend" block
    output logic [address_width-1:0]       PC
);

logic       next_pc;

always_ff@(posedge clk) begin
    if (rst)        PC <= 32'b0;
    else if (PCsrc)      PC <= PC + ImmOp;
    else            PC <= PC + 3'd4;
end

endmodule
