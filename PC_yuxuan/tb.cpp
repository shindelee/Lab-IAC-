#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vblue_part.h"
#define MAX_SIM_CYC 1000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  int ImmOp = 10;

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vblue_part * top = new Vblue_part;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("blue_part.vcd");
 
  // initialize simulation inputs
  top->PCsrc = 0;
  top->rst = 1;
  top->clk = 1;
  top->ImmOp = 10;
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    if (simcyc == 10)     top->PCsrc = 1;
    else                    top->PCsrc = 0;
    if (simcyc==50)         top->rst = 1;
    else                    top->rst = 0;
    if (Verilated::gotFinish())  exit(0);
  }

  tfp->close(); 
  exit(0);
}

// N=36 -> 1s
