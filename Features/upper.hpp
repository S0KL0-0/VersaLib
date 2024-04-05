#ifndef UPPER_HPP
#define UPPER_HPP

#include <string>

inline std::string upper(const std::string& str) {
    std::string nstr = "";

    for (const char& c : str) {
        if (c >= 97 && c <= 122) {
            nstr += c - 32;
        } else {
            nstr += c;
        }
    }

    return nstr;

}

#endif // UPPER_HPP