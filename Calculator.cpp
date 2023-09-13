#include "Calculator.h"
#include <cmath>

template <typename T>
T Calculator<T>::add(T a, T b) {
    return a + b;
}

template <typename T>
T Calculator<T>::subtract(T a, T b) {
    return a - b;
}

template <typename T>
T Calculator<T>::multiply(T a, T b) {
    return a * b;
}

template <typename T>
T Calculator<T>::divide(T a, T b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
    return a / b;
}

template <typename T>
T Calculator<T>::square(T a) {
    return a * a;
}

template <typename T>
T Calculator<T>::squareRoot(T a) {
    if (a < 0) {
        std::cerr << "Error: Negative number!" << std::endl;
        return 0;
    }
    return sqrt(a);
}

template <typename T>
T Calculator<T>::power(T base, T exponent) {
    return pow(base, exponent);
}

template <typename T>
T Calculator<T>::modulo(T a, T b) {
    if (b == 0) {
        std::cerr << "Error: Modulo by zero!" << std::endl;
        return 0;
    }
    return a % b;
}

template <typename T>
T Calculator<T>::naturalLogarithm(T a) {
    if (a <= 0) {
        std::cerr << "Error: Non-positive number!" << std::endl;
        return 0;
    }
    return log(a);
}

template <typename T>
T Calculator<T>::logarithmBase10(T a) {
    if (a <= 0) {
        std::cerr << "Error: Non-positive number!" << std::endl;
        return 0;
    }
    return log10(a);
}
