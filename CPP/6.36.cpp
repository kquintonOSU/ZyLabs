/*
Write a program that first gets a list of integers from input. The input begins with an integer indicating the number of integers that follow. 
Then, get the last value from the input, and output all integers less than or equal to that value.

Ex: If the input is:

5 50 60 140 200 75 100
the output is:

50 60 75
The 5 indicates that there are five integers in the list, namely 50, 60, 140, 200, and 75. The 100 indicates that the program should output all 
integers less than or equal to 100, so the program outputs 50, 60, and 75. For coding simplicity, follow every output value by a space, including the last one.

Such functionality is common on sites like Amazon, where a user can filter results.
*/

#include <iostream>
#include <vector> 
using namespace std;

/* Define your function here */
vector<int> GetUserValues(vector<int>& userValues, int numValues) {
   userValues.resize(numValues);
   for (int i = 0; i < userValues.size(); i++) {
      cin >> userValues.at(i);
   }
   return userValues;
}

void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold) {
   for (int i = 0; i < userValues.size(); i++) {
      if (userValues.at(i) < upperThreshold) {
         printf("%d ", userValues.at(i));
      }
   }
   cout << endl;
}

int main() {
   vector<int> userValues; 
   int upperThreshold;
   int numValues;
   
   cin >> numValues;
   userValues = GetUserValues(userValues, numValues);

   cin >> upperThreshold;
   OutputIntsLessThanOrEqualToThreshold(userValues, upperThreshold);

   return 0;
}
