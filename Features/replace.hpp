#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>

inline std::string replace(const std::string& str, char target, char replacement = '\0') {
    std::string replacedStr;
    for (char c : str) {
        if (c == target) {
            if (replacement != '\0') {
                replacedStr.push_back(replacement);
            }
        } else {
            replacedStr.push_back(c);
        }
    }
    return replacedStr;
}

#endif // REPLACE_HPP
