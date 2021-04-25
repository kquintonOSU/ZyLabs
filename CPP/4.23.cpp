/*

Write a program whose input is two integers, and whose output is the first integer and subsequent increments of 5 as long as the value is less than or equal to the second integer.

Ex: If the input is:

-15 10
the output is:

-15 -10 -5 0 5 10
Ex: If the second integer is less than the first as in:

20 5
the output is:

Second integer can't be less than the first.
For coding simplicity, output a space after every integer, including the last.
*/

#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int num1, num2;
   cin >> num1 >> num2;
   
   if (num1 < num2) {
      while (true) {
         printf("%d ", num1);
         num1 += 5;
         if (num1 > num2) {
            break;
         }
      }
      cout << endl;
   }
   else if (num1 == num2) {
      printf("%d \n", num1);
   }
   else {
      cout << "Second integer can't be less than the first." << endl;
   }

   return 0;
}
