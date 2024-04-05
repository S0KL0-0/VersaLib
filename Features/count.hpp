#ifndef COUNT_HPP
#define COUNT_HPP

#include <string>

inline int count(const std::string& str, char target) {
    int count = 0;
    for (char c : str) {
        if (c == target) {
            count++;
        }
    }
    return count;
}

#endif // COUNT_HPP