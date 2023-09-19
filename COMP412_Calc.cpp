#include <iostream>
#include <cmath>
#include <cassert>

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) {
        return a - b;
    }

    T multiply(T a, T b) {
        return a * b;
    }

    T divide(T a, T b) {
        if (b == 0) {
            throw std::runtime_error("Error: Division by zero!");
        }
        return a / b;
    }

    T modulo(T a, T b) {
        if (b == 0) {
            throw std::runtime_error("Error: Modulo by zero!");
        }
        return a % b;
    }

    T square(T a) {
        return a * a;
    }

    T squareRoot(T a) {
        if (a < 0) {
            throw std::runtime_error("Error: Square root of a negative number!");
        }
        return sqrt(a);
    }

    T power(T base, T exponent) {
        return pow(base, exponent);
    }

    T naturalLogarithm(T a) {
        if (a <= 0) {
            throw std::runtime_error("Error: Natural logarithm of a non-positive number!");
        }
        return log(a);
    }

    T logarithmBase10(T a) {
        if (a <= 0) {
            throw std::runtime_error("Error: Base-10 logarithm of a non-positive number!");
        }
        return log10(a);
    }
};

int main() {
    Calculator<double> calculator;

    char operation;
    double num1, num2;

    std::cout << "Enter an operation (+, -, *, /, %, ^, s, r, ln, log): ";
    std::cin >> operation;

    if (operation != 's' && operation != 'r' && operation != 'ln' && operation != 'log') {
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;
    } else {
        std::cout << "Enter a number: ";
        std::cin >> num1;
    }

    try {
        switch (operation) {
            case '+':
                std::cout << "Result: " << calculator.add(num1, num2) << std::endl;
                break;
            case '-':
                std::cout << "Result: " << calculator.subtract(num1, num2) << std::endl;
                break;
            case '*':
                std::cout << "Result: " << calculator.multiply(num1, num2) << std::endl;
                break;
            case '/':
                std::cout << "Result: " << calculator.divide(num1, num2) << std::endl;
                break;
            case '%':
                std::cout << "Result: " << calculator.modulo(num1, num2) << std::endl;
                break;
            case 's':
                std::cout << "Result: " << calculator.square(num1) << std::endl;
                break;
            case 'r':
                std::cout << "Result: " << calculator.squareRoot(num1) << std::endl;
                break;
            case '^':
                std::cout << "Result: " << calculator.power(num1, num2) << std::endl;
                break;
            case 'ln':
                std::cout << "Result: " << calculator.naturalLogarithm(num1) << std::endl;
                break;
            case 'log':
                std::cout << "Result: " << calculator.logarithmBase10(num1) << std::endl;
                break;
            default:
                std::cerr << "Invalid operation!" << std::endl;
                break;
        }
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
