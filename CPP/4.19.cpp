/*
Many user-created passwords are simple and easy to guess. Write a program that takes a simple password and makes it stronger by replacing characters using the key below, and by appending "!" to the end of the input string.

i becomes 1
a becomes @
m becomes M
B becomes 8
s becomes $
Ex: If the input is:

mypassword
the output is:

Myp@$$word!
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   
   /* Type your code here. */
   string userPassword;
   cin >> userPassword;
   
   for (int i = 0; i < userPassword.length(); i++) {
      if (userPassword[i] == 'i') {
         userPassword[i] = '1';
      }
      if (userPassword[i] == 'a') {
         userPassword[i] = '@';
      }
      if (userPassword[i] == 'm') {
         userPassword[i] = 'M';
      }
      if (userPassword[i] == 'B') {
         userPassword[i] = '8';
      }
      if (userPassword[i] == 's') {
         userPassword[i] = '$';
      }
   }
   
   printf("%s!\n", userPassword.c_str());

   return 0;
}
