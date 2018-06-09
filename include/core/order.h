#include "stdafx.h"

class Order
{
public:
    Order(){
        this->timestamp = std::chrono::system_clock::now();
    }
    ~Order(){
    }
	// is it the side to buy or sell
    uint32_t side;
	// is it the quanity
    uint64_t quantity;
	// the price
    double price;
	// the priority of the order
    double priority = price/quantity;
	// the timestamp of the order
    std::chrono::time_point<std::chrono::system_clock> timestamp;
};
