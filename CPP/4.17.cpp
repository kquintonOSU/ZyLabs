/*
Write a program whose input is a character and a string, and whose output indicates the number of times the character appears in the string. The output should include the input character and use the plural form, n's, if the number of times the characters appears is not exactly 1.

Ex: If the input is:

n Monday
the output is:

1 n
Ex: If the input is:

z Today is Monday
the output is:

0 z's
Ex: If the input is:

n It's a sunny day
the output is:

2 n's
Case matters.

Ex: If the input is:

n Nobody
the output is:

0 n's
n is different than N.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
   char userInputLetter;
   string userInputString;
   unsigned int count = 0;
   
   cin >> userInputLetter;
   getline(cin, userInputString);
   
   for (int i = 0; i < userInputString.length(); i++) {
      if (userInputLetter == userInputString[i]) {
         count++;
      }
   }
   
   if (count == 1) {
      printf("%d %c\n", count, userInputLetter);
   }
   else {
      printf("%d %c's\n", count, userInputLetter);
   }

   return 0;
}
