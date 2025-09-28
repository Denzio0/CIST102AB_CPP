#include <iostream>
using namespace std;

int main() {
    int x,s, y, rows;
    cout << "ENTER VALUE";
    cin >> rows;

// outer loop starts x at 1 and increases until it reaches 'rows'; it repeats the inner loop for each row
// inner loop starts y at 1 and increases up to the current row number x; it prints '@' for each column in that row
// after the inner loop finishes, endl moves the output to the next line, then outer loop increments x and repeats

// first nested loop: prints a left-aligned stair of '@' increasing from 1 to 'rows'
    for (x = 1; x <= rows; ++x) {
        for (y = 1; y <= x; ++y) {
            cout << " @  ";
        }
        cout << endl;
    }   
// second nested loop: prints an inverted left-aligned stair of '@' decreasing from 5 to 1
        for (x = 5; x >= 1; --x) {
            for (y = 1; y <= x; ++y) {
              cout << " @  ";
        }
        cout << endl;

    }
// first nested loop: prints a right-aligned stair of '@' increasing from 1 to 'rows'
     for (x = 1; x <= rows; ++x) {
        for (s = 1; s <= rows - x; ++s) {   // print leading spaces to shift the stair right
            cout << "   ";
        }
        for (y = 1; y <= x; ++y) {        
            cout << " @ ";
        }
        cout << endl;
    }
// second nested loop: prints an inverted right-aligned stair of '@' decreasing from 'rows' to 1
    for (x = rows; x >= 1; --x) {
        for (s = 1; s <= rows - x; ++s) {  
            cout << "   "; // print leading spaces to shift the stair right
        }
        for (y = 1; y <= x; ++y) {
            cout << " @ ";
        }
        cout << endl;
    }
    cout << "end loop" << endl;
    return 0;
}