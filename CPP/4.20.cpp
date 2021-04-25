/*
Write a program that removes all non alpha characters from the given input.

Ex: If the input is:

-Hello, 1 world$!
the output is:

Helloworld
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   
   /* Type your code here. */
   string userString;
   
   getline(cin, userString);
   
   for (unsigned int i = 0; i < userString.length(); i++) {
      if ((userString[i] >= 'a' && userString[i] <= 'z') || (userString[i] >= 'A' && userString[i] <= 'Z')) {
         cout << userString[i];
      }
   }
   cout << endl;

   return 0;
}
