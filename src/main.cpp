#include"include/homogeneous.h"
#include"include/order.h"
#include<vector>
#include<iostream>


int main() {
    // Initialize variables
    double test = 5.3;
    std::vector<float, std::allocator<float>> cnsts = {2.4, 5.2, 6.2};
    std::vector<int, std::allocator<int>> derivs = {0, 0, 1, 2};
    std::vector<float> result;

    // Read in from GUI, for now hard code
    
    // Determine order of solution, or read-in from GUI 
    Order HD;
    int highestDerivative = HD.getOrder(derivs);
    std::cout<<"This is a "<<highestDerivative<<" order equation \n";


    // Determine method of solving, or read in from GUI
    

    // Execute solution
    Homogeneous myclass;
    result = myclass.calc(cnsts, 0, 2);

    for (const auto i : result) {
        std::cout<<i<<'\n';
    }
    return EXIT_SUCCESS;
}
