#ifndef FILTER_H
#define FILTER_H
#include<regex>
#include<vector>

std::vector<std::string> split_equation(std::string str) {
    std::vector<std::string> result;
    std::regex rgx("\\=+");
    std::sregex_token_iterator iter(str.begin(), str.end(), rgx, -1);
    std::sregex_token_iterator end;
    for ( ; iter != end; ++iter) {
        result.push_back(*iter);
    }
    return result;
}

std::vector<std::string> split_hand(std::string str) {
    std::vector<std::string> result;
    std::string plus = "+";
    std::string minus = "-";
    std::string temp;
    for (const auto &ch : str) {
        if (ch == '+' || ch == '-') {
            result.push_back(temp);
            temp.clear();
        }
        else {
            temp = temp + ch;
        }
    }
    result.push_back(temp);
    return result;
}


#endif