// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vblue_part__Syms.h"
#include "Vblue_part.h"
#include "Vblue_part___024root.h"

// FUNCTIONS
Vblue_part__Syms::~Vblue_part__Syms()
{
}

Vblue_part__Syms::Vblue_part__Syms(VerilatedContext* contextp, const char* namep, Vblue_part* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
