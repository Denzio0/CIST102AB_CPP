#include <iostream>
using namespace std;

int main() {
    int x, y;

// nested loops to print a left-aligned stair (triangle) of '@' symbols
    for (x = 1; x <= 5; ++x) { // outer loop controls the number of rows
        for (y = 1; y <= x; ++y) {  // inner loop prints '@' for each column in the row
            cout << " @  "; // print one symbol
        }
        cout << endl;  // move to the next line after finishing the row
    }

// outer loop: x = 5 down to 1 controls the number of rows (inverted stair)
        for (x = 5; x >= 1; --x) {
         // inner loop: y = 1 to x prints '@' for each column in the current row
            for (y = 1; y <= x; ++y) {
              cout << " @  "; // print one symbol
        }
        cout << endl; // move to next row after finishing the current row
    }

    cout << "end loop" << endl;
    return 0;
}
