#include"include/order.h"

Order::Order() {}

highest Order::getOrder(std::vector<int, std::allocator<int>> vec_set) {
    int max = *std::max_element(vec_set.begin(), vec_set.end());
    return max;
}