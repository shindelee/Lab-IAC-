module instrmem #(
    parameter   ADDRESS_WIDTH = 32,
                DATAOUT_WIDTH = 32,
                DATA_WIDTH = 8
)(
    input logic [ADDRESS_WIDTH-1:0] A,
    output logic [DATAOUT_WIDTH-1:0] RD
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
        $display("Loading rom.");
        $readmemh("test.mem", rom_array);
end;

assign dout = {rom_array [addr+3],rom_array [addr+2],rom_array [addr+1],rom_array [addr]};

endmodule
