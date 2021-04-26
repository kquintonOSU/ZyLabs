/*
Write a program with total change amount as an integer input that outputs the change using the fewest coins, one coin type per line. The coin types are dollars, quarters, dimes, nickels, and pennies. Use singular and plural coin names as appropriate, like 1 penny vs. 2 pennies.

Ex: If the input is:

0 
or less, the output is:

no change
Ex: If the input is:

45
the output is:

1 quarter
2 dimes 
*/

#include <iostream>
#include <vector> 
using namespace std;

/* Define your function here */ 
void ExactChange(int userTotal, vector<int>& coinVals) {
   coinVals.at(0) = userTotal / 100;
   userTotal %= 100;
   coinVals.at(1) = userTotal / 25;
   userTotal %= 25;
   coinVals.at(2) = userTotal / 10;
   userTotal %= 10;
   coinVals.at(3) = userTotal / 5;
   userTotal %= 5;
   coinVals.at(4) = userTotal;   
}

int main() {
   int inputVal;
   vector<int> changeAmount(5); 
   
   /* Type your code here. Your code must call the function. */
   cin >> inputVal;
   ExactChange(inputVal, changeAmount);
   
   if (inputVal > 0) {
      if (changeAmount.at(0) == 1) {
         printf("%d dollar\n", changeAmount.at(0));
      }
      if (changeAmount.at(0) > 1) {
         printf("%d dollars\n", changeAmount.at(0));
      }
      if (changeAmount.at(1) == 1) {
         printf("%d quarter\n", changeAmount.at(1));
      }
      if (changeAmount.at(1) > 1) {
         printf("%d quarters\n", changeAmount.at(1));
      }
      if (changeAmount.at(2) == 1) {
         printf("%d dime\n", changeAmount.at(2));
      }
      if (changeAmount.at(2) > 1) {
         printf("%d dimes\n", changeAmount.at(2));
      }
      if (changeAmount.at(3) == 1) {
         printf("%d nickel\n", changeAmount.at(3));
      }
      if (changeAmount.at(3) > 1) {
         printf("%d nickels\n", changeAmount.at(3));
      }
      if (changeAmount.at(4) == 1) {
         printf("%d penny\n", changeAmount.at(4));
      }
      if (changeAmount.at(4) > 1) {
         printf("%d pennies\n", changeAmount.at(4));
      }    
   }
   else {
      cout << "no change" << endl;
   }

   return 0;
}
