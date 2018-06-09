#include "stdafx.h"
#include "types.h"

class Order
{
public:
    // constructor
    Order();
    // destructor
    ~Order();
    // order id 
    orderid_t orderid;
	// is it the side to buy or sell
    uint32_t is_ask(side_t side);
	// is it the quanity
    uint64_t quantity;
	// the price
    double price;
	// the priority of the order
    double priority = price/quantity;
	// the timestamp of the order
    std::chrono::time_point<std::chrono::system_clock> timestamp;
};
