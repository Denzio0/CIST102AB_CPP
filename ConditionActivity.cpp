#include <iostream>
using namespace std;

    int main () {

// ask the user to enter the student's grade and store it in the variable 'studentgrade'
        int studentgrade;
        cout << "ENTER YOUR THE STUDENT GRADE"; 
        cin >> studentgrade;

// conditions
// check the value of 'studentgrade' and print the corresponding grade or message
// comparison operators check the relationship between two values:
// >   : greater than (true if left is bigger than right)
// >=  : greater than or equal to (true if left is bigger or equal to right)
// <   : less than (true if left is smaller than right)
// <=  : less than or equal to (true if left is smaller or equal to right)
// ==  : equal to (true if both sides are equal)
// !=  : not equal to (true if both sides are different)
        if ( studentgrade > 100 ){
            cout << "NOT WITHIN GRADE RANGE";
        } 

        if ( studentgrade >= 90 && studentgrade <= 100) {
            cout << "GRADE A ";
        } 

        else  if ( studentgrade >= 85 && studentgrade <= 89){
            cout << " GRADE B";
        }

        else  if ( studentgrade >= 80 && studentgrade <= 84){
            cout << "GRADE C";
        }

        else  if ( studentgrade >= 75&& studentgrade <= 79) {
            cout << " GRADE D";
        }

        else  if ( studentgrade >= 72 && studentgrade <= 74){
            cout << "GRADE E";
        }
        else  if ( studentgrade <= 70 ){
            cout << " GRADE F";
        }
        
        else if ( studentgrade <= 65 ){
            cout << " DROPPED";
        }

    return 0;
    }
