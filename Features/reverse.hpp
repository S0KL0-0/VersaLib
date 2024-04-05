#ifndef REVERSE_HPP
#define REVERSE_HPP

#include <string>

inline std::string reverse(const std::string& str) {
  std::string reversedStr;
  reversedStr.reserve(str.size());

  for (auto it = str.rbegin(); it != str.rend(); ++it) {
    reversedStr.push_back(*it);
  }

  return reversedStr;
}

#endif // REVERSE_HPP
