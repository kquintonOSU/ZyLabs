/*
Write a function MaxMagnitude() with two integer input parameters that returns the largest magnitude value. Use the function in a program that takes two integer inputs, and outputs the largest magnitude value.

Ex: If the inputs are:

5 7
the function returns:

7
Ex: If the inputs are:

-8 -2
the function returns:

-8
Note: The function does not just return the largest value, which for -8 -2 would be -2. Though not necessary, you may use the absolute-value built-in math function.
*/

#include <iostream>
using namespace std;

/* Define your function here */ 
int MaxMagnitude(int userVal1, int userVal2) {
   int max;
   if ((userVal1 < 0) || (userVal2 < 0)) {
      int tempVal1 = userVal1;
      int tempVal2 = userVal2;
      userVal1 = abs(userVal1);
      userVal2 = abs(userVal2);
      if (userVal1 >= userVal2) {
         max = tempVal1;
      }
      else {
         max = tempVal2;
      }      
   }
   else {
      if (userVal1 >= userVal2) {
         max = userVal1;
      }
      else {
         max = userVal2;
      }
   }
   return max;
}

int main() {
   /* Type your code here */
   int userNum1, userNum2, max;
   
   cin >> userNum1 >> userNum2;

   max = MaxMagnitude(userNum1, userNum2);
  
   printf("%d\n", max);

   return 0;
}
