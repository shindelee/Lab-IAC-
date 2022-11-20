#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vtop * top = new Vtop;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("top.vcd");

  // initialize simulation inputs
  top->ALUsrc = 0;
  top->ALUctrl = 0;
  top->rs1 = 5'b00001;
  top->rs2 = 5'b00001;
  top->rd = 5'b00001;
  top->RegWrite = 1;
  top->ImmOp = 32'h00000000;

  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick = 0; tick < 2; tick++) {
      tfp->dump (2*simcyc + tick);
      top->clk = !top->clk;
      top->eval ();
    }

    if (simcyc == 5)

    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();    
  tfp->close(); 
  exit(0);
}
