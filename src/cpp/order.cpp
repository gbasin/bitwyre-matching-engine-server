#include "order.h"

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
