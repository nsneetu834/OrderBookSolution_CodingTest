# Order Book Management System

## Description
This project implements an Order Book Management System in C++. It processes and manages pending orders based on real-time price updates (ticks) and executes them when certain conditions are met. The system supports Buy Limit orders and prints the details of executed trades.

## Features
- Manage an order book with buy orders.
- Process real-time price updates (ticks).
- Execute buy limit orders based on price conditions.
- Print execution details of triggered orders.

## Project Structure

order_book_project/
├── include/
│ ├── Order.h
│ ├── Tick.h
│ └── OrderBook.h
├── src/
│ ├── Order.cpp
│ ├── Tick.cpp
│ └── OrderBook.cpp
└── main.cpp


## Files and Directories
- **include/**: Contains header files for the `Order`, `Tick`, and `OrderBook` classes.
- **src/**: Contains implementation files for the `Order`, `Tick`, and `OrderBook` classes.
- **main.cpp**: The main entry point of the program.

## Order Structure (`Order.h`, `Order.cpp`)
Defines the `Order` structure with attributes like order ID, symbol, type, price, quantity, and status. Includes a constructor to initialize an order.

## Tick Structure (`Tick.h`, `Tick.cpp`)
Defines the `Tick` structure with attributes like symbol, timestamp, and price. Includes a constructor to initialize a tick.

## OrderBook Class (`OrderBook.h`, `OrderBook.cpp`)
Manages the order book, processes incoming ticks, and executes pending orders if conditions are met. Includes methods to add orders, handle ticks, and print execution details.

## Getting Started

### Prerequisites
- C++ compiler (e.g., `g++`)

### Compilation and Execution
1. Clone the repository:
   ```sh
   git clone <repository_url>
   cd order_book_project

2. Compile the project:

   g++ -o order_book_project src/Order.cpp src/Tick.cpp src/OrderBook.cpp main.cpp

3. Run the executable:

  ./order_book_project


Example
Input:
Pending Orders:

Order 1: AAPL, Buy Limit, Price: 100, Quantity: 10
Order 2: AAPL, Buy Limit, Price: 105, Quantity: 5
Order 3: AAPL, Buy Limit, Price: 102, Quantity: 15
Order 4: AAPL, Buy Limit, Price: 98, Quantity: 15
Order 5: GOOG, Buy Limit, Price: 200, Quantity: 10
Order 6: GOOG, Buy Limit, Price: 201, Quantity: 15
Order 7: GOOG, Buy Limit, Price: 198, Quantity: 10
Ticks:

[AAPL, Time: 08:58, Price: 106]
[AAPL, Time: 09:00, Price: 104]
[AAPL, Time: 09:01, Price: 102]
[AAPL, Time: 09:02, Price: 98]
[GOOG, Time: 09:03, Price: 200]


Order 2 executed at 09:00, Price: 104, Quantity: 5
Order 3 executed at 09:01, Price: 102, Quantity: 15
Order 1 executed at 09:02, Price: 98, Quantity: 10
Order 4 executed at 09:02, Price: 98, Quantity: 15
Order 6 executed at 09:03, Price: 200, Quantity: 15
Order 5 executed at 09:03, Price: 200, Quantity: 10


Author
Neetu Singh
