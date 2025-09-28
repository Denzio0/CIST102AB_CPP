#include <iostream> // Required for input/output operations

int main() {
    char operation;
    double num1, num2;

    // Prompt the user to enter the first number
    std::cout << "Enter first number: ";
    std::cin >> num1;

    // Prompt the user to enter the operation
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

    // Prompt the user to enter the second number
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform the calculation based on the chosen operation
    switch (operation) {
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
            // Handle invalid operations
            std::cout << "Error! Invalid operation." << std::endl;
            break;
    }

    return 0; // Indicate successful execution
}