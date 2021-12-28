#ifndef LHS_H
#define LHS_H
#include<vector>
#include<variant>
#include<string>

class Lhs {
    public:
        std::vector<std::string> data;
        std::vector<float> cnsts;
        std::vector<std::string> vars;

        void addElem(std::string arg) {
            data.push_back(arg);
        }

        


};


#endif