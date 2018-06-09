#include "stdafx.h"
#include "order.h"

class Orderbook
{
public:
    // constructor
    Orderbook();
    // destructor
    ~Orderbook();
    // execute trade
    void execute();
    // shutdown
    void shutdown();
    // cancel
    bool cancel(orderid_t orderid);
    // limit
    bool limit();
    // report
    bool report();

    // ask book
    std::priority_queue<Order, std::vector<Order>,
        std::greater<Order> > askbook;
    // bid book
    std::priority_queue<Order, std::vector<Order>,
        std::greater<Order> > bidbook; 
};
