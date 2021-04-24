/*
Forms often allow a user to enter an integer. Write a program that takes in a string representing an integer as input, and outputs Yes if every character is a digit 0-9.

Ex: If the input is:

1995
the output is:

Yes
Ex: If the input is:

42,000
or

1995!
the output is:

No
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userString;
   
   cin >> userString;

   /* Type your code here. */
   int isInt = 0;
   for (int i = 0; i < userString.length(); i++) {
      if (!isdigit(userString[i])) {
         isInt = 1;
         break;
      }
   }
   
   if (isInt == 0) {
      cout << "Yes" << endl;
   }
   if (isInt == 1) {
      cout << "No" <<  endl;
   }

   return 0;
}
