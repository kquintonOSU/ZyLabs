/*
Write a program whose input is two integers and whose output is the two integers swapped.

Ex: If the input is:

3 8
the output is:

8 3
Your program must define and call a function. SwapValues returns the two values in swapped order.
void SwapValues(int& userVal1, int& userVal2)
*/

#include <iostream>
using namespace std;

/* Define your function here */ 
void SwapValues(int& userVal1, int& userVal2) {
   int tempVal = userVal1;
   userVal1 = userVal2;
   userVal2 = tempVal;
}

int main() {
   /* Type your code here. Your code must call the function.  */
   int userVal1, userVal2;
   
   cin >> userVal1 >> userVal2;
   
   SwapValues(userVal1, userVal2);
   
   printf("%d %d\n", userVal1, userVal2);

   return 0;
}
