#ifndef CUT_HPP
#define CUT_HPP

#include <string>

inline std::string cut(const std::string& str, const int& pos) {
    std::string nstr = "";
    for (int i = 0; i < pos; i++) {
        nstr += str[i];
    }

    return nstr;
}

#endif // CUT_HPP
