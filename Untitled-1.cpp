#include <iostream>

int main() {
    char op;
    double num1, num2;

    // Prompt the user to enter the operator
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    // Prompt the user to enter two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform the operation based on the operator using a switch statement
    switch (op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            // Handle division by zero
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error! Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            // Handle invalid operator input
            std::cout << "Error! Invalid operator." << std::endl;
            break;
    }

    return 0;
}