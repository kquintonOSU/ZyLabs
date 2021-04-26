/*
Write a program that reads a list of integers, and outputs whether the list contains all even numbers, odd numbers, or neither. The input begins with an integer indicating the number of integers in the list. The first integer is not in the list.

Ex: If the input is:

5 2 4 6 8 10
the output is:

all even
Ex: If the input is:

5 1 -3 5 -7 9
the output is:

all odd
Ex: If the input is:

5 1 2 3 4 5
the output is:

not even or odd
*/

#include <iostream>
#include <vector>
using namespace std;

/* Define your function here */
bool IsVectorEven(vector<int> myVec) {
   bool isEven = true;
   for (int i = 0; i < myVec.size(); i++) {
      if (myVec.at(i) % 2 == 1) {
         isEven = false;
         break;
      }
   }
   return isEven;
}

bool IsVectorOdd(vector<int> myVec) {
   bool isOdd = true;
   for (int i = 0; i < myVec.size(); i++) {
      if (myVec.at(i) % 2 == 0) {
         isOdd = false;
         break;
      }
   }
   return isOdd;
}

int main() {
   /* Type your code here. */
   vector<int> userNums;
   int totalNums;
   bool isOdd, isEven;
   
   cin >> totalNums;
   userNums.resize(totalNums);
   
   for (int i = 0; i < totalNums; i++) {
      cin >> userNums.at(i);
   }
   
   isEven = IsVectorEven(userNums);
   isOdd = IsVectorOdd(userNums);
   
   if ((isEven) && (!isOdd)) {
      cout << "all even" << endl;
   }
   else if ((isOdd) && (!isEven)) {
      cout << "all odd" << endl;
   }
   else {
      cout << "not even or odd" << endl;
   }

   return 0;
}
