#ifndef REMOVE_HPP
#define REMOVE_HPP

#include <string>

inline std::string remove(const std::string& str, char target) {
    std::string nstr;
    for (char c : str) {
        if (c != target) { nstr.push_back(c); }
    }
    return nstr;
}

#endif // REMOVE_HPP
