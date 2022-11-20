module instr_mem #(
    parameter   ADDRESS_WIDTH = 32,
                DATAOUT_WIDTH = 32,
                DATA_WIDTH = 8
)(
    input logic [ADDRESS_WIDTH-1:0] A,
    output logic [DATAOUT_WIDTH-1:0] RD
);

logic [DATA_WIDTH-1:0] rom_array [20:0]; // the parameter after the rom_array is the size of the .mem file

initial begin
        $display("Loading rom.");
        $readmemh("test1.mem", rom_array);
end;

assign RD = {rom_array [A],rom_array [A+1],rom_array [A+2],rom_array [A+3]};

endmodule
