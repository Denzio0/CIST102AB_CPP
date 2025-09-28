#include <iostream>
#include <string>
using namespace std;

int main () {
 string mystr;
 cout << "STUDENT ID: ";
 getline (cin, mystr);
 cout << "202515122" <<mystr << "\n";

 cout << "STUDENT NAME: ";
 getline (cin, mystr);
 cout << "MARC RODEN D. FAMERO" <<mystr << "\n";
 
 cout << "COURSE: ";
 getline (cin, mystr);
 cout << "BACHELOR OF SCIENCE IN INFORMATION TECHNOLOGY" <<mystr << "\n";
 
 cout << "CONTACT NUMBER: ";
 getline (cin, mystr);
 cout << "09946360951" <<mystr << "\n";
 
  cout << "ADDRESS: ";
 getline (cin, mystr);
 cout << "186 DAISY ST. TONDO MANILA" <<mystr << "\n";

    return 0;
}