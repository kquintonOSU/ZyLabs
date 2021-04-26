/*
An acronym is a word formed from the initial letters of words in a set phrase. 
Write a program whose input is a phrase and whose output is an acronym of the input. 
If a word begins with a lower case letter, don't include that letter in the acronym. 
Assume there will be at least one upper case letter in the input.

Ex: If the input is:

Institute of Electrical and Electronics Engineers
the output should is:

IEEE
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/* Define your function here */
string CreateAcronym(string userPhrase) {
   string newString = "";
   for (int i = 0; i < userPhrase.length(); i++) {
      if (isupper(userPhrase[i])) {
         newString = newString + userPhrase[i];
      }
   }
   return newString;
}

int main() {
   /* Type your code here */
   string userInput;
   
   getline(cin, userInput);
   
   printf("%s\n", CreateAcronym(userInput).c_str());

   return 0;
}
