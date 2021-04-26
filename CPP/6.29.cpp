/*
Write a program whose inputs are three integers, and whose outputs are the largest of the three values and the smallest of the three values.

Ex: If the input is:

7 15 3
the output is:

largest: 15 
smallest: 3
Your program must define and call the following two functions. The LargestNumber function should return the largest number of the three input values. 
The SmallestNumber function should return the smallest number of the three input values.
*/

#include <iostream>
using namespace std;

/* Define your functions here */ 
int LargestNumber(int num1, int num2, int num3) {
   return max(num1, max(num2, num3));
}

int SmallestNumber(int num1, int num2, int num3) {
   return min(num1, min(num2, num3));
}

int main() {
   /* Type your code here. Your code must call the functions.  */
   int userInput1, userInput2, userInput3;
   
   cin >> userInput1 >> userInput2 >> userInput3;
   
   printf("largest: %d\n", LargestNumber(userInput1, userInput2, userInput3));
   printf("smallest: %d\n", SmallestNumber(userInput1, userInput2, userInput3));

   return 0;
}
