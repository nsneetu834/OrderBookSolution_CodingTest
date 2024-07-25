// Order.h
// Header file defining the Order structure

#ifndef ORDER_H
#define ORDER_H

#include <string>

// Order structure represents a financial order with various attributes
struct Order {
    int order_id;          // Unique ID for the order
    std::string symbol;    // Financial instrument symbol
    std::string type;      // Type of order (e.g., Buy Limit)
    double price;          // Order price
    int quantity;          // Quantity of the instrument
    std::string status;    // Status of the order (Pending, Executed)

    // Constructor to initialize an Order
    Order(int id, const std::string& sym, const std::string& typ, double prc, int qty);
};

#endif // ORDER_H
