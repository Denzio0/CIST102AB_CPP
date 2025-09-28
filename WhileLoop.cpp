#include <iostream>
#include <string>
using namespace std;

int main() {

    
int x;
    cout << "\nINPUT INTEGER";
    cin >> x;

// loop continues as long as x is less than 10
// prints the current value of x followed by a comma
// increments x by 2 each time, so the loop progresses toward the stopping condition
    while ( x < 10  ) {
        cout << x << ", " ;
            x = x + 2;

    }

    return 0;
}