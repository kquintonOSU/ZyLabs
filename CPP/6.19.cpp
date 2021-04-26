/*
One lap around a standard high-school running track is exactly 0.25 miles. Write a program that takes a number of miles as input, and outputs the number of laps.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

1.5
the output is:

6.00
Ex: If the input is:

2.2
the output is:

8.80
*/

#include <iostream>
#include <iomanip>                 // For setprecision
using namespace std;

/* Define your function here */ 
double MilesToLaps(double userMiles) {
   return userMiles / .25;
}

int main() {
   /* Type your code here. Your code must call the function.  */
   double userMiles;
   cin >> userMiles;
   printf("%.2f\n", MilesToLaps(userMiles));

   return 0;
}
