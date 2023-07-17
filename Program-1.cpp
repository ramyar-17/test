#include <iostream>
#include <string>

class Calculator {
private:
    double a;
    double b;

public:
    Calculator(double num1, double num2) {
        a = num1;
        b = num2;
    }

    double add() {
        return a + b;
    }

    double subtract() {
        return a - b;
    }

    double multiply() {
        return a * b;
    }

    double divide() {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 0;
        }
    }
};

int main() {
    double num1, num2;
    std::string operation;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the type of operation (+, -, *, /): ";
    std::cin >> operation;

    Calculator calculator(num1, num2);

    double result;

    if (operation == "+") {
        result = calculator.add();
    } else if (operation == "-") {
        result = calculator.subtract();
    } else if (operation == "*") {
        result = calculator.multiply();
    } else if (operation == "/") {
        result = calculator.divide();
    } else {
        std::cout << "Invalid operation entered." << std::endl;
        return 0;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
