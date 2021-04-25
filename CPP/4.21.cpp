/*
Given a line of text as input, output the number of characters excluding spaces, periods, exclamation points, or commas.

Ex: If the input is:

Listen, Mr. Jones, calm down.
the output is:

21
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   // Add more variables as needed
   
   getline(cin, userText);  // Gets entire line, including spaces. 

   /* Type your code here. */
   int count = 0;
   
   for (unsigned int i = 0; i < userText.length(); i++) {
      if ((userText[i] != ' ') && (userText[i] != '.') && (userText[i] != '!') && (userText[i] != ',')) {
         count++;
      }
   }
   
   printf("%d\n", count);

   return 0;
}
