/*
Statistics are often calculated with varying amounts of input data. Write a program that takes any number of non-negative integers as input, and outputs the max and average. A negative integer ends the input and is not included in the statistics.

Ex: When the input is:

15 20 0 5 -1
the output is:

20 10
You can assume that at least one non-negative integer is input.
*/

#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int userInput, sumUserInput = 0, count = 0, maxInput = 0;
   while (1) {
      cin >> userInput;
      if (userInput < 0) {
         break;
      }
      else {
         if (userInput > maxInput) {
            maxInput = userInput;
         }
         count++;
         sumUserInput += userInput;
      }
   }
   
   printf("%d %d\n", maxInput, sumUserInput / count);

   return 0;
}
