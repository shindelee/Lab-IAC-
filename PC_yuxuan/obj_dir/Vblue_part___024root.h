// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vblue_part.h for the primary calling header

#ifndef VERILATED_VBLUE_PART___024ROOT_H_
#define VERILATED_VBLUE_PART___024ROOT_H_  // guard

#include "verilated.h"

class Vblue_part__Syms;

class Vblue_part___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(PCsrc,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ blue_part__DOT__next_pc;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(ImmOp,31,0);
    VL_OUT(PC,31,0);

    // INTERNAL VARIABLES
    Vblue_part__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vblue_part___024root(Vblue_part__Syms* symsp, const char* name);
    ~Vblue_part___024root();
    VL_UNCOPYABLE(Vblue_part___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
