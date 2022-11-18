// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblue_part.h for the primary calling header

#include "verilated.h"

#include "Vblue_part__Syms.h"
#include "Vblue_part___024root.h"

void Vblue_part___024root___ctor_var_reset(Vblue_part___024root* vlSelf);

Vblue_part___024root::Vblue_part___024root(Vblue_part__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vblue_part___024root___ctor_var_reset(this);
}

void Vblue_part___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vblue_part___024root::~Vblue_part___024root() {
}
