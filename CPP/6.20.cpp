/*
A pedometer treats walking 2,000 steps as walking 1 mile. Write a program whose input is the number of steps, and whose output is the miles walked.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

5345
the output is:

2.67
*/

#include <iostream>
#include <iomanip>
using namespace std;

/* Define your function here */ 
double StepsToMiles(int userSteps) {
   return userSteps / static_cast<double>(2000.0);
}
   

int main() {
   /* Type your code here */
   int userInputSteps;
   
   cin >> userInputSteps;
   
   printf("%.2f\n", StepsToMiles(userInputSteps));

   return 0;
}
