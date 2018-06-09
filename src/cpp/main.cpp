#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#include <numeric>
#include <chrono>

// Boost headers

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

inline bool operator< (const Order& lhs, const Order& rhs)
{
    if (lhs.priority == rhs.priority) {
        return std::tie(lhs.timestamp) > std::tie(rhs.timestamp);
    }
    else {
        return std::tie(lhs.priority) < std::tie(rhs.priority);
    }
}
inline bool operator> (const Order& lhs, const Order& rhs)
{
    if (lhs.priority == rhs.priority) {
        return std::tie(lhs.timestamp) < std::tie(rhs.timestamp);
    }
    else {
        return std::tie(lhs.priority) > std::tie(rhs.priority);
    }
}

int main()
{    
	std::priority_queue<Order, std::vector<Order>, std::greater<Order> > askbook;

    return 0;
}
