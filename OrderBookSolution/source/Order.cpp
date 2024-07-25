
// Order.cpp
// Source file for Order structure implementation

#include "../Order.h"

// Constructor implementation for Order structure
Order::Order(int id, const std::string& sym, const std::string& typ, double prc, int qty)
    : order_id(id), symbol(sym), type(typ), price(prc), quantity(qty), status("Pending") {}
