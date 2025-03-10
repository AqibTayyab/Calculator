#include <iostream>

class Calculator {
public:
    void run() {
        char operation;
        double num1, num2;

        std::cout << "Simple Calculator\n";
        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter an operator (+, -, *, /): ";
        std::cin >> operation;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (operation) {
            case '+':
                std::cout << "Result: " << (num1 + num2) << std::endl;
                break;
            case '-':
                std::cout << "Result: " << (num1 - num2) << std::endl;
                break;
            case '*':
                std::cout << "Result: " << (num1 * num2) << std::endl;
                break;
            case '/':
                if (num2 != 0) {
                    std::cout << "Result: " << (num1 / num2) << std::endl;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                }
                break;
            default:
                std::cout << "Error: Invalid operator!" << std::endl;
                break;
        }
    }
};

int main() {
    Calculator calc;
    calc.run();
    return 0;
}
