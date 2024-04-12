#ifndef FLIPC_HPP
#define FLIPC_HPP

#include <string>

inline std::string flipc(const std::string& str) {
    std::string nstr = "";

    for (const char& c : str) {
        if (c >= 65 && c <= 90) { // upper case
            nstr += c + 32;
        } else if (c >= 97 && c <= 122) { // lower case
            nstr += c - 32;
        } else {
            nstr += c;
        }
    }

    return nstr;

}

inline char flipc(const char& c) {

    if (c >= 65 && c <= 90) { // upper case
        return c + 32;
    } else if (c >= 97 && c <= 122) { // lower case
        return c - 32;
    } else {
        return c;
    }

}

#endif // FLIPC_HPP