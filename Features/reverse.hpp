#ifndef REVERSE_HPP
#define REVERSE_HPP

#include <string>

inline std::string reverse(const std::string& str) {
    std::string reversedStr(str);

    size_t left = 0;
    size_t right = reversedStr.size() - 1;

    while (left < right) {
        char temp = reversedStr[left];
        reversedStr[left] = reversedStr[right];
        reversedStr[right] = temp;

        // Move pointers inward
        ++left;
        --right;
    }

    return reversedStr;
}

inline int reverse(const int& integer) {
    std::string str(std::to_string(integer));

    size_t left = 0;
    size_t right = str.size() - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move pointers inward
        ++left;
        --right;
    }

    return stoi(str);
}

#endif // REVERSE_HPP
