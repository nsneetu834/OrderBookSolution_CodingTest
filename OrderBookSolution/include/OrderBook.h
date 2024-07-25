// OrderBook.h
// Header file defining the OrderBook class

#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include "Order.h"
#include "Tick.h"
#include <vector>
#include <map>
#include <string>

// OrderBook class manages pending and executed orders
class OrderBook {
public:
    // Adds an order to the order book
    void addOrder(const Order& order);

    // Handles incoming tick and executes orders if conditions are met
    void handleTick(const Tick& tick);

    // Prints execution details of an order
    void printExecutionDetails(const Order& order, const Tick& tick);

private:
    // Map storing orders by symbol
    std::map<std::string, std::vector<Order>> orders;

    // Vector storing executed orders
    std::vector<Order> executedOrders;
};

#endif // ORDERBOOK_H
