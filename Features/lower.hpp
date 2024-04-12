#ifndef LOWER_HPP
#define LOWER_HPP

#include <string>

inline std::string lower(const std::string& str) {
    std::string nstr = "";

    for (const char& c : str) {
        if (c >= 65 && c <= 90) {
            nstr += c + 32;
        } else {
            nstr += c;
        }
    }

    return nstr;

}

inline char lower(const char& c) {

    if (c >= 65 && c <= 90) {
        return c + 32;
    } else {
        return c;
    }

}

#endif // LOWER_HPP