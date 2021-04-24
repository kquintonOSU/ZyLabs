/*
Primary U.S. interstate highways are numbered 1-99. Odd numbers (like the 5 or 95) go north/south, and evens (like the 10 or 90) go east/west. Auxiliary highways are numbered 100-999, excluding multiples of 100, and service the primary highway indicated by the rightmost two digits. Thus, I-405 services I-5, and I-290 services I-90.

Given a highway number, indicate whether it is a primary or auxiliary highway. If auxiliary, indicate what primary highway it serves. Also indicate if the (primary) highway runs north/south or east/west.

Ex: If the input is:

90
the output is:

I-90 is primary, going east/west.
Ex: If the input is:

290
the output is:

I-290 is auxiliary, serving I-90, going east/west.
Ex: If the input is:

0
the output is:

0 is not a valid interstate highway number. 
Ex: If the input is:

200
the output is:

200 is not a valid interstate highway number. 
*/

#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   
   cin >> highwayNumber;

   /* Type your code here. */
   if (highwayNumber > 0 && highwayNumber < 100) {
      if (highwayNumber % 2 == 0) {
         printf("I-%d is primary, going east/west.\n", highwayNumber);
      }
      else {
         printf("I-%d is primary, going north/south.\n", highwayNumber);
      }  
   }
   else if (highwayNumber > 100 && highwayNumber < 1000) {
      if (highwayNumber % 100 == 0) {
         printf("%d is not a valid interstate highway number.\n", highwayNumber);
      }
      else {
         if (highwayNumber % 2 == 0) {
            printf("I-%d is auxiliary, serving I-%d, going east/west.\n", highwayNumber, highwayNumber % 100);
         }
         else {
            printf("I-%d is auxiliary, serving I-%d, going north/south.\n", highwayNumber, highwayNumber % 100);
         }
      }
   }
   else {
      printf("%d is not a valid interstate highway number.\n", highwayNumber);
   }

   return 0;
}
