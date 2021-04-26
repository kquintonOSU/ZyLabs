/*
Write a program that reads a list of integers, and outputs those integers in reverse. The input begins with an integer indicating the number of integers that follow. For coding simplicity, follow each output integer by a comma, including the last one.

Ex: If the input is:

5 2 4 6 8 10
the output is:

10,8,6,4,2,
To achieve the above, first read the integers into a vector. Then output the vector in reverse.
*/

#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> userInts; // A vector to hold the user's input integers

   /* Type your code here. */
   int totalInts;
   cin >> totalInts;
   
   userInts.resize(totalInts);
   
   for (int i = 0; i < userInts.size(); i++) {
      cin >> userInts.at(i);
   }
   
   for (int i = userInts.size() - 1; i >= 0; i--) {
      printf("%d,", userInts.at(i));
   }
   cout << endl;

   return 0;
}
