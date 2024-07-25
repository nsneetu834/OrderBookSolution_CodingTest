
// Tick.cpp
// Source file for Tick structure implementation

#include "../include/Tick.h"

// Constructor implementation for Tick structure
Tick::Tick(const std::string& sym, const std::string& time, double prc)
    : symbol(sym), timestamp(time), price(prc) {}
