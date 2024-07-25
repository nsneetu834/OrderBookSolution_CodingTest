

// OrderBook.cpp
// Source file for OrderBook class implementation

#include <iostream>
#include "../include/Order.h"
#include "../include/OrderBook.h"
#include "../include/Tick.h"

// Adds an order to the order book
void OrderBook::addOrder(const Order& order) {
    orders[order.symbol].push_back(order);
}

// Handles incoming tick and executes orders if conditions are met
void OrderBook::handleTick(const Tick& tick) {
    // Check if there are any orders for the given symbol
    if (orders.find(tick.symbol) != orders.end()) {
        auto& symbol_orders = orders[tick.symbol];
        for (auto& order : symbol_orders) {
            // Execute pending Buy Limit orders if the price condition is met
            if (order.status == "Pending" &&
                ((order.type == "Buy Limit" && tick.price <= order.price))) {
                order.status = "Executed";
                executedOrders.push_back(order);
                printExecutionDetails(order, tick);
            }
        }
    }
}

// Prints execution details of an order
void OrderBook::printExecutionDetails(const Order& order, const Tick& tick) {
    std::cout << "Order " << order.order_id << " executed at "
        << tick.timestamp << ", Price: " << tick.price
        << ", Quantity: " << order.quantity << std::endl;
}

