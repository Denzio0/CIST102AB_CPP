#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    // run a loop from 1 to 12
    // print the multiplication table
    // for (initialization; condition; increment/decrement) {} 
    // ulit ulit hanggang sa ma satisfy yung condition ng boolean logic
    // compare yung n sa i 
    // is i less than or equal to 12?
    // if true do the update or increment
    // hanggat true ang condition, magloloop
    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}