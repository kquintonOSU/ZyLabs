/*
Write a program that takes in a line of text as input, and outputs that line of text in reverse. The program repeats, ending when the user enters "Done", "done", or "d" for the line of text.

Ex: If the input is:

Hello there
Hey
done
then the output is:

ereht olleH
yeH
*/

#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   string userString;

   getline(cin,userString);
   
   while(userString != "done" && userString != "Done" && userString != "d") {
      for(int i = userString.length()-1; i >= 0; i--){
         cout << userString[i];
      }
      cout << endl;
      getline(cin, userString);
   }

   return 0;
}
