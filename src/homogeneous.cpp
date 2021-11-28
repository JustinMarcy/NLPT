#include"homogeneous.h"
#include<iostream>
#include<cmath>

Homogeneous::Homogeneous() {};

std::vector<float> Homogeneous::calc(std::vector<float, std::allocator<float>> cnsts,  double test) {
    std::vector<float> result;
    for (int i = 0; i < cnsts.size(); i++) {
        result.push_back(cnsts[i] * test);
    };
    return result;
};
