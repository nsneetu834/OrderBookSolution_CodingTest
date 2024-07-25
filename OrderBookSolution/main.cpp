

// main.cpp
// Main entry point of the program

#include "include/OrderBook.h"

int main() {
    OrderBook orderBook;

    // Add pending orders
    orderBook.addOrder(Order(1, "AAPL", "Buy Limit", 100, 10));
    orderBook.addOrder(Order(2, "AAPL", "Buy Limit", 105, 5));
    orderBook.addOrder(Order(3, "AAPL", "Buy Limit", 102, 15));
    orderBook.addOrder(Order(4, "AAPL", "Buy Limit", 98, 15));
    orderBook.addOrder(Order(5, "GOOG", "Buy Limit", 200, 10));
    orderBook.addOrder(Order(6, "GOOG", "Buy Limit", 201, 15));
    orderBook.addOrder(Order(7, "GOOG", "Buy Limit", 198, 10));

    // Process ticks
    std::vector<Tick> ticks = {
        Tick("AAPL", "08:58", 106),
        Tick("AAPL", "09:00", 104),
        Tick("AAPL", "09:01", 102),
        Tick("AAPL", "09:02", 98),
        Tick("GOOG", "09:03", 200)
    };

    // Handle each tick and trigger order execution if conditions are met
    for (const auto& tick : ticks) {
        orderBook.handleTick(tick);
    }

    return 0;
}
