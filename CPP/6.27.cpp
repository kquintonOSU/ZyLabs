/*
Write a program that removes all spaces from the given input.

Ex: If the input is:

Hello my name is John.
the output is:

HellomynameisJohn.
*/

#include <iostream>
using namespace std;

/* Define your function here */ 
string RemoveSpaces(string userString) {
   string newString;
   for (int i = 0; i < userString.size(); ++i) {
      if (userString[i] != ' ') {
         newString += userString[i];
      }
   }
   return newString;
}

int main() {
   /* Type your code here. Your code must call the function.  */
   string userStringInput;
   
   getline(cin, userStringInput);
   
   printf("%s\n", RemoveSpaces(userStringInput).c_str());

   return 0;
}
