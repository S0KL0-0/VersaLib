#ifndef FIND_HPP
#define FIND_HPP

#include <string>

inline int find(const std::string& str, char target) {
    for (std::string::size_type i = 0; i < str.length(); ++i) {
        if (str[i] == target) {
            return static_cast<int>(i);
        }
    }
    return -1; // Char not found
}

#endif // FIND_HPP
