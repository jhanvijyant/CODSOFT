#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Enter operator: +, -, *, /: ";
    std::cin >> operation;

    std::cout << "Enter two operands: ";
    std::cin >> num1 >> num2;

    switch (operation) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            } else {
                std::cout << "Error! Division by zero is not allowed.";
            }
            break;
        default:
            std::cout << "Error! operator is not correct";
            break;
    }

    return 0;
}