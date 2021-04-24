/*
Mad Libs are activities that have a person provide various words, which are then used to complete a short story in unexpected (and hopefully funny) ways.

Write a program that takes a string and integer as input, and outputs a sentence using those items as below. The program repeats until the input is quit.

Ex: If the input is:

apples 5
shoes 2
quit 0
the output is:

Eating 5 apples a day keeps you happy and healthy.
Eating 2 shoes a day keeps you happy and healthy.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
   string userInput1 = "";
   int userInput2;

   while (true) {
      cin >> userInput1 >> userInput2;
      if (userInput1 == "quit") {
         break;
      }
      else {
         printf("Eating %d %s a day keeps you happy and healthy.\n", userInput2, userInput1.c_str());
      }
   }   
   return 0;
}
