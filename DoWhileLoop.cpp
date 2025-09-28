#include <iostream> //includes the input/output library so you can use cin, cout, endl
#include <string> // includes the string library so you can use the string data type
using namespace std;

int main () {
    string rod;

// repeatedly ask the user to enter a name, store it in the string variable 'rod', and display what they typed
    do {
    cout << "ENTER NAME OF ROD: ";
    getline ( cin, rod );
    cout << "YOU ENTERED: " << rod << endl;

    }

// keep repeating the loop until the user types "roden" in any of the listed cases; after that, print a message
// Logical operators combine multiple conditions to decide if a block of code should run:
// &&  : AND operator (true only if both conditions are true)
// ||  : OR operator (true if at least one condition is true)
// !   : NOT operator (reverses the truth value, true becomes false and vice versa)

    while ( rod != "roden" && rod != "RODEN" && rod !="rOdEn" );
        cout << "TAPOS NA BRO";


}