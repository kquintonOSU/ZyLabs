/*
Write a program whose input is a character and a string, and whose output indicates the number of times the character appears in the string.

Ex: If the input is:

n Monday
the output is:

1
Ex: If the input is:

z Today is Monday
the output is:

0
Ex: If the input is:

n It's a sunny day
the output is:

2
Case matters. n is different than N.

Ex: If the input is:

n Nobody
the output is:

0
*/

#include <iostream>
using namespace std;

/* Define your function here */ 
int CountCharacters(char userChar, string userString) {
   int count = 0;
   
   for (int i = 0; i < userString.length(); i++) {
      if (userString[i] == userChar) {
         count++;
      }
   }
   return count;
}

int main() {
   /* Type your code here. Your code must call the function.  */
   string userStringInput;
   char userCharInput;
   
   cin >> userCharInput;
   getline(cin,userStringInput);
   
   printf("%d\n", CountCharacters(userCharInput, userStringInput));
   
   return 0;
}
