module datamem#(
    parameter   ADDRESS_WIDTH = 32,
                DATA_WIDTH = 32
)(
    input logic clk,
    input logic wr_en,
    input logic [ADDRESS_WIDTH-1:0] addr,
    input logic [DATA_WIDTH-1:0] wd,
    output logic [DATA_WIDTH-1:0] rd 
);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

assign rd = ram_array [addr];

always_ff @(posedge clk) begin 
    if(wr_en == 1'b1)
        ram_array[addr] <= wd;
end

endmodule
