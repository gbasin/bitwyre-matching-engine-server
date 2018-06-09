#include "order.h"
    
Order::Order()
{
    this->timestamp = std::chrono::system_clock::now();
}

Order::~Order()
{
    // destructor
}

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
	
inline uint32_t is_ask(side_t side)
{ 
	return side; 
}
