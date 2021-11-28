#ifndef ORDER_H
#define ORDER_H
#include<vector>
#include<algorithm>

typedef int highest;
class Order {
    public:
        Order();
        highest getOrder(std::vector<int, std::allocator<int>> vec_set);
};
#endif