/*
Write a program that takes a date as input and outputs the date's season. The input is a string to represent the month and an int to represent the day.

Ex: If the input is:

April 11
the output is:

Spring
In addition, check if the string and int are valid (an actual month and day).

Ex: If the input is:

Blue 65
the output is:

Invalid 
The dates for each season are:
Spring: March 20 - June 20
Summer: June 21 - September 21
Autumn: September 22 - December 20
Winter: December 21 - March 19
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;
   
   cin >> inputMonth;
   cin >> inputDay;
   
   /* Type your code here. */
   if (inputMonth == "January" && inputDay >= 1 && inputDay <= 31) {
      cout << "Winter" << endl;
   }
   else if (inputMonth == "February" && inputDay >= 1 && inputDay <= 29) {
      cout << "Winter" << endl;
   }
   else if (inputMonth == "April" && inputDay >= 1 && inputDay <= 30) {
      cout << "Spring" << endl;
   }
   else if (inputMonth == "May" && inputDay >= 1 && inputDay <= 30) {
      cout << "Spring" << endl;
   }
   else if (inputMonth == "July" && inputDay >= 1 && inputDay <= 31) {
      cout << "Summer" << endl;
   }
   else if (inputMonth == "August" && inputDay >= 1 && inputDay <= 31) {
      cout << "Summer" << endl;
   }
   else if (inputMonth == "October" && inputDay >= 1 && inputDay <= 31) {
      cout << "Autumn" << endl;
   }
   else if (inputMonth == "November" && inputDay >= 1 && inputDay <= 30) {
      cout << "Autumn" << endl;
   }
   else if (inputMonth == "March" && inputDay >= 20 && inputDay <= 31) {
      cout << "Spring" << endl;
   }
   else if (inputMonth == "June" && inputDay >= 1 && inputDay <= 20) {
      cout << "Spring" << endl;
   }
   else if (inputMonth == "June" && inputDay >= 21 && inputDay <= 30) {
      cout << "Summer" << endl;
   }
   else if (inputMonth == "September" && inputDay >= 1 && inputDay <= 21) {
      cout << "Summer" << endl;
   }
   else if (inputMonth == "September" && inputDay >= 22 && inputDay <= 30) {
      cout << "Autumn" << endl;
   }
   else if (inputMonth == "December" && inputDay >= 0 && inputDay <= 20) {
      cout << "Autumn" << endl;
   }
   else if (inputMonth == "December" && inputDay >= 21 && inputDay <= 30) {
      cout << "Winter" << endl;
   }
   else if (inputMonth == "March" && inputDay >= 1 && inputDay <= 19) {
      cout << "Winter" << endl;
   }
   else {
      cout << "Invalid" << endl;
   }
   return 0;
}
