/*
When analyzing data sets, such as data for human heights or for human weights, a common step is to adjust the data. 
This can be done by normalizing to values between 0 and 1, or throwing away outliers. 
For this program, adjust the values by subtracting the smallest value from all the values. 
The input begins with an integer indicating the number of integers that follow. Assume that the list will always contain less than 20 integers.

Ex: If the input is:

5 30 50 10 70 65
the output is:

20 40 0 60 55
For coding simplicity, follow every output value by a space, even the last one.
*/

#include <iostream>
#include <vector> 
using namespace std;

/* Define your function here */
int GetMinimumInt(vector<int> listInts) {
   int minInt = listInts.at(0);
   for (int i = 0; i < listInts.size(); i++) {
      if (minInt > listInts.at(i)) {
         minInt = listInts.at(i);
      }
   }
   return minInt;
}

void newInts(vector<int>& listInts) {
   int minInt = GetMinimumInt(listInts);
   for (int i = 0; i < listInts.size(); i++) {
      listInts.at(i) -= minInt;
      printf("%d ", listInts.at(i));
   }
   cout << endl;
}

int main() {
   /* Type your code here */
   vector<int> userNums;
   int totalNums;
   
   cin >> totalNums;
   userNums.resize(totalNums);
   
   for (int i = 0; i < userNums.size(); i++) {
      cin >> userNums.at(i);
   }
   
   newInts(userNums);

   return 0;
}
