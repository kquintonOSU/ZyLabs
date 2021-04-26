/*
Write a program that reads a list of integers, and outputs the two smallest integers in the list, in ascending order. The input begins with an integer indicating the number of integers that follow.

Ex: If the input is:

5 10 5 3 21 2
the output is:

2 and 3
You can assume that the list of integers will have at least 2 values.

To achieve the above, first read the integers into a vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Type your code here. */
   vector<int> userInputs;
   int totalInputs, minNum, nextMinNum;
   
   cin >> totalInputs;
   userInputs.resize(totalInputs);
   
   for (int i = 0; i < totalInputs; i++) {
      cin >> userInputs.at(i);
      if (minNum > userInputs.at(i)) {
         minNum = userInputs.at(i);
      }
   }
   
   minNum = userInputs.at(0);
   nextMinNum = userInputs.at(1);
   
   if (nextMinNum < minNum) {
      int tempVal = nextMinNum;
      nextMinNum = minNum;
      minNum = tempVal;
   }
   
   for (int i = 2; i < totalInputs; i++) {
      if (minNum >= userInputs.at(i)) {
         nextMinNum = minNum;
         minNum = userInputs.at(i);
      }
      else if (userInputs.at(i) < nextMinNum) {
         nextMinNum = userInputs.at(i);
      }
   }
   
   printf("%d and %d\n", minNum, nextMinNum);

   return 0;
}
