/*
Write a program that first gets a list of integers from input. The input begins with an integer indicating the number of integers that follow. That list is followed by two more integers representing lower and upper bounds of a range. Your program should output all integers from the list that are within that range (inclusive of the bounds). For coding simplicity, follow each output integer by a comma, even the last one. The output ends with a newline.

Ex: If the input is:

5 25 51 0 200 33
0 50
then the output is:

25,0,33,
(the bounds are 0-50, so 51 and 200 are out of range and thus not output).

To achieve the above, first read the list of integers into a vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Type your code here. */
   vector<int> userInputs;
   int totalInputs, minRange, maxRange;
   
   cin >> totalInputs;
   userInputs.resize(totalInputs);
   
   for (int i = 0; i < totalInputs; i++) {
      cin >> userInputs.at(i);
   }
   
   cin >> minRange >> maxRange;
   
   for (int i = 0; i < totalInputs; i++) {
      if ((userInputs.at(i) >= minRange) && (userInputs.at(i) <= maxRange)) {
         printf("%d,", userInputs.at(i));
      }
   }
   cout << endl;

   return 0;
}
