/*
Given a sorted list of integers, output the middle integer. A negative number indicates the end of the input (the negative number is not a part of the sorted list). Assume the number of integers is always odd.

Ex: If the input is:

2 3 4 8 11 -1 
the output is:

Middle item: 4
The maximum number of list values for any test case should not exceed 9. If exceeded, output "Too many numbers".
*/

#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {

   /* Type your code here. */
   vector <int> userValues;
   int maxElements = 9;
   int num, count = 0;
   
   while (true) {
      cin >> num;
      if (num == -1) {
         break;
      } else if (count == maxElements) {
         cout << "Too many numbers" << endl;
         return 0;
      } else {
         userValues.push_back(num);
         ++count;
      }
   }
   
   printf("Middle item: %d\n", userValues.at(count / 2));

   return 0;
}
