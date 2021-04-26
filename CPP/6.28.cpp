/*
Write a program that takes in a positive integer as input, and outputs a string of 1's and 0's representing the integer in binary. 
For an integer x, the algorithm is:

As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2
Note: The above algorithm outputs the 0's and 1's in reverse order. You will need to write a second function to reverse the string.

Ex: If the input is:

6
the output is:

110
Your program must define and call the following two functions. The IntegerToReverseBinary() function should return a string of 1's and 0's 
representing the integer in binary (in reverse). The ReverseString() function should return a string representing the input string in reverse.
*/

#include <iostream>
using namespace std;

/* Define your functions here */ 
string IntegerToReverseBinary(int integerValue) {
   int binaryIntValue;
   string binaryStringValue = "";
   
   while (integerValue > 0) {
      binaryIntValue = integerValue % 2;
      binaryStringValue = binaryStringValue + to_string(binaryIntValue);
      integerValue /= 2;
   }
   return binaryStringValue;
}

string ReverseString(string userString) {
   string newString = "";
   for (int i = userString.length() - 1; i>=0; i--) {
      newString = newString + userString[i]; 
   }
   return newString;
}

int main() {
   /* Type your code here. Your code must call the functions.  */
   int userInput;
   cin >> userInput;
   
   cout << ReverseString(IntegerToReverseBinary(userInput)) << endl;

   return 0;
}
