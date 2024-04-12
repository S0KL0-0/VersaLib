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

inline char upper(const char& c) {

    if (c >= 97 && c <= 122) {
        return c - 32;
    } else {
        return c;
    }

}

#endif // UPPER_HPP