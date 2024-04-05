#ifndef FACTORIAL_HPP
#define FACTORIAL_HPP

#include <string>

inline int factorial(const int& integer) {\
    if (integer < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers");
    }

    long long fact = 1;
    for (int i = 1; i <= integer; i++) {
        fact *= i;
    }
    return fact;
}

#endif // FACTORIAL_HPP
