#ifndef EXTRACT_HPP
#define EXTRACT_HPP

#include <string>
#include <stdexcept>

inline std::string extract(const std::string& str, int start, int end) {
    if (start == 's') start = 0;
    if (end == 'e') end = static_cast<int>(str.size()) - 1;

    if (start < 0 || start >= static_cast<int>(str.size()) || end < 0 || end >= static_cast<int>(str.size()) || start > end) {
        throw std::out_of_range("Invalid start or end index");
    }

    return str.substr(start, end - start + 1);
}

#endif // EXTRACT_HPP
