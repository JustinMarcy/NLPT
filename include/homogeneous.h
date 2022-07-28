#ifndef HOMOGENEOUS_H
#define HOMOGENEOUS_H
#include<vector>
#include<string>

class Homogeneous {
    private:
        std::vector<float> LHS;
        std::vector<float> roots;
        std::vector<std::string> generalForm;

    
    public:
        Homogeneous();
        void getGeneral(std::vector<std::string> parts);
        std::vector<float> calc(std::vector<float, std::allocator<float> > cnsts, unsigned int muc_type, int order);

};

// class NonHomogeneous {
//     private:
//         std::vector<float> cnsts;
//         std::vector<float> result;
//         double test;
//     public:
//         std::vector<float> NH() {
//         std::vector<float> result = {0, 0, 0};
//         return result;
//         };

//         std::vector<float> NH(std::vector<float> cnsts,  double test) {
        
//         for (int i = 0; i < cnsts.size(); i++) {
//             result.push_back(cnsts[i] * test);
//         };
//         return result;
//         };
// };




#endif