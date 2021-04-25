/*
A palindrome is a word or a phrase that is the same when read both forward and backward. Examples are: "bob," "sees," or "never odd or even" (ignoring spaces). 
Write a program whose input is a word or phrase, and that outputs whether the input is a palindrome.

Ex: If the input is:

bob
the output is:

palindrome: bob
Ex: If the input is:

bobby
the output is:

not a palindrome: bobby
Hint: Start by just handling single-word input, and submit for grading. Once passing single-word test cases, extend the program to handle phrases. 
If the input is a phrase, remove or ignore spaces.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

   /* Type your code here. */
   string userString, reversedString, modifiedString;
   
   getline(cin, userString);
   modifiedString = "";
   reversedString = "";
   
   for (int i = 0; i < userString.length(); i++) {
      char ch = tolower(userString[i]);
      if (isalnum(ch)) {
         modifiedString += ch;
         reversedString = ch + reversedString;
      }
   }
   
   if (reversedString == modifiedString) {
      printf("palindrome: %s\n", userString.c_str());
   } else {
      printf("not a palindrome: %s\n", userString.c_str());
   }
   
   return 0;
}
