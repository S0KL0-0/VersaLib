#ifndef IXTRACT_HPP
#define IXTRACT_HPP

#include <string>

inline std::string ixtract(const std::string& str) {
    std::string nstr = "";
    for (const char& c : str) {
      if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9') {
        nstr += c;
      }
    }
    return nstr;
}

#endif // IXTRACT_HPP
