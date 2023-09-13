#ifndef CALCULATOR_H
#define CALCULATOR_H

template <typename T>
class Calculator {
public:
    T add(T a, T b);
    T subtract(T a, T b);
    T multiply(T a, T b);
    T divide(T a, T b);
    T square(T a);
    T squareRoot(T a);
    T power(T base, T exponent);
    T modulo(T a, T b);
    T naturalLogarithm(T a);
    T logarithmBase10(T a);
};

#endif
