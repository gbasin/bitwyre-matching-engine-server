#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#include <numeric>
#include <chrono>

// Boost headers

// Local headers
#include "order.h"

int main()
{    
	std::priority_queue<Order, std::vector<Order>, std::greater<Order> > askbook;
    std::priority_queue<Order, std::vector<Order>, std::greater<Order> > bidbook;

    return 0;
}
