/*
Write a program whose inputs are three integers, and whose output is the smallest of the three values.

Ex: If the input is:

7 15 3
the output is:

3
*/

#include <iostream>
//#include <cmath>
using namespace std;

int main() {
   
   /* Type your code here. */
   int num1, num2, num3, minNum;
   cin >> num1 >> num2 >> num3;
   
   if (num1 < num2 && num1 < num3) {
      minNum = num1;
   }
   else if (num2 < num1 && num2 < num3) {
      minNum = num2;
   }
   else if (num3 < num1 && num3 < num2) {
      minNum = num3;
   }
   else {
      minNum = num1;
   }

   printf("%d\n", minNum);



//   printf("%d\n", min(a,min(b,c))); uses math function via cmath library which is outside scope of this lab

   return 0;
}
