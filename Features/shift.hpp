#ifndef SHIFT_HPP
#define SHIFT_HPP

#include <string>

inline std::string shift(const std::string& str) {
  std::string nstr;
  nstr.reserve(str.size());

  for (size_t i = 1; i < str.size(); i++) {
    nstr += str[i];
  }
  nstr += str[0];

  return nstr;
}

#endif // SHIFT_HPP
