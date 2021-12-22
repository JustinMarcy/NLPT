#include"include/homogeneous.h"
#include"include/roots.h"
#include<iostream>
#include<cmath>

Homogeneous::Homogeneous() {};

void Homogeneous::getGeneral(std::vector<std::string> parts) {
    
};

std::vector<float> Homogeneous::calc(std::vector<float, std::allocator<float>> cnsts,  unsigned int muc_type, int order) {
    std::vector<float> result;
    if (muc_type == 0 && order == 2) {
        quadratic qroots;
        qroots.find_roots(&cnsts[0]);
        result.push_back(qroots.quad_roots.root1);
        result.push_back(qroots.quad_roots.root2);
        result.push_back(qroots.quad_roots.realz);
        result.push_back(qroots.quad_roots.imagin);
    }
    return result;
};
