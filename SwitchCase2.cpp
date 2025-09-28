#include <iostream>
using namespace std;

int main () {
    char day = 'A';
    cout << "ENTER LETTER: ";
    cin >> day;

    switch (day){
        case 'A':
            cout << "MON";
            break;

        case 'B':
            cout << "TUES";
            break;

        case 'C':
            cout << "WED";
            break;

        case 'D':
            cout << "THURS";
            break;

        case 'E':
            cout << "FRI";
            break;

        case 'F':
            cout << "SAT";
            break;
    
        case 'G':
            cout << "SUN";
            break;
    
        default:
        cout << "ERROR: INVALID VALUE";


    }
    return 0;
}