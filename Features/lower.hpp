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

#endif // LOWER_HPP