/*
A “jiffy” is the scientific name for 1/100th of a second. Given an input number of seconds, output the number of "jiffies."

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

15
the output is:

1500.00
*/

#include <iostream>
#include <iomanip>
using namespace std;

/* Define your function here */ 
double SecondsToJiffies(double userSeconds) {
   return userSeconds / .01;
}

int main() {
   /* Type your code here. Your code must call the function.  */
   int userInputSeconds;
   
   cin >> userInputSeconds;
   
   printf("%.2f\n", SecondsToJiffies(userInputSeconds));

   return 0;
}
