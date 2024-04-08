#ifndef INSERT_HPP
#define INSERT_HPP

#include <string>

inline std::string insert(const std::string& str, const int& pos, const std::string& ins) {
    std::string nstr = "";
    for (int i = 0; i < pos; i++) {
        nstr += str[i];
    }
    nstr += ins;

    for (std::size_t i = pos; i < str.length(); i++) {
        nstr += str[i];
    }

    return nstr;
}

#endif // INSERT_HPP
