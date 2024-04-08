#ifndef SHUFFLE_HPP
#define SHUFFLE_HPP

#include <string>

inline std::string shuffle(const std::string& str, const int& mode) {
    std::string nstr = "";

    size_t left = 0;
    size_t right = str.size() - 1;

    switch(mode) {
        case 1:
            while (left < right) {
                nstr += str[left]; 
                nstr += str[right];

                // Move pointers inward
                ++left;
                --right;
            }
            break;
        default:
            break;
    }
    return nstr;
}

#endif // SHUFFLE_HPP
