// Tick.h
// Header file defining the Tick structure

#ifndef TICK_H
#define TICK_H

#include <string>

// Tick structure represents a price update in the market
struct Tick {
    std::string symbol;    // Financial instrument symbol
    std::string timestamp; // Timestamp of the tick
    double price;          // Price of the instrument at the timestamp

    // Constructor to initialize a Tick
    Tick(const std::string& sym, const std::string& time, double prc);
};

#endif // TICK_H
