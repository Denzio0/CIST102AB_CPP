#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

// Ask the user for two numbers and an operator, then store the inputs
        do {
            cout << "\nEnter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;

            cout << "Enter an operator (+, -, *, /,): ";
            cin >> op;

// Decide which operation to perform based on the operator entered by the user
            switch(op) {
                case '+':
                    cout << "Result: " << num1 + num2 << endl;
                    break;

                case '-':
                    cout << "Result: " << num1 - num2 << endl;
                    break;

                case '*':
                    cout << "Result: " << num1 * num2 << endl;
                    break;

                case '/':
                    if (num2 != 0)
                        cout << "Result: " << num1 / num2 << endl;
                    else
                        cout << "Error! Division by zero." << endl;
                    break;
                    
                default:
                    cout << "Invalid operator!" << endl;
            }

// Ask if the user wants to repeat the process and keep looping while the answer is 'y' or 'Y'
            cout << "\nANO ISA KA PA? (y/n): ";
            cin >> choice;

        } while(choice == 'y' || choice == 'Y');

        cout << "END OF PROGRAM " << endl;
    return 0;
}