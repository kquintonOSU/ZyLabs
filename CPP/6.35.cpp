/*

Write a program that gets a list of integers from input, and outputs the integers in ascending order (lowest to highest). 
The first integer indicates how many numbers are in the list. Assume that the list will always contain less than 20 integers.

Ex: If the input is:

5 10 4 39 12 2
the output is:

2 4 10 12 39
For coding simplicity, follow every output value by a space, including the last one.

Your program must define and call the following function. When the SortVector function is complete, the vector passed in as the parameter should be sorted.
void SortVector(vector<int>& myVec)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Define your function here */
void SortVector(vector<int>& myVec) {
   sort(myVec.begin(), myVec.end());
}

int main() {
   /* Type your code here */
   vector<int> userNums;
   int totalNums;
   
   cin >> totalNums;
   userNums.resize(totalNums);
   
   for (int i = 0; i < totalNums; i++) {
      cin >> userNums.at(i);
   }
   SortVector(userNums);
   for (int i = 0; i < userNums.size(); i++) {
      printf("%d ", userNums.at(i));
   }
   cout << endl;

   return 0;
}
