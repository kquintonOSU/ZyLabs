/*
Write a program that simulates flipping a coin to make decisions. The input is how many decisions are needed, and the output is either heads or tails. 
Assume the input is a value greater than 0.

Ex: If the input is:

3
the output is:

heads
tails
heads
For reproducibility needed for auto-grading, seed the program with a value of 2. In a real program, you would seed with the current time. 
In that case, every program's output would be different, which is what is desired but can't be auto-graded.

Note: A common student mistake is to call srand() before each call to rand(). But seeding should only be done once, at the start of the program, 
after which rand() can be called any number of times.

Your program must define and call the following function that randomly picks 0 or 1 and returns "heads" or "tails". 
Assume the value 0 represents "heads" and 1 represents "tails".
*/

#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */ 
string HeadsOrTails() {
   string headsOrTails;
   int coinCheck = rand() % 2;
   if (coinCheck == 0) {
      headsOrTails = "heads";
   }
   else {
      headsOrTails = "tails";
   }
   return headsOrTails;
}

int main() {
   // Add more variables as needed
   int userInput;
   
   srand(2);  // Unique seed

   /* Type your code here */
   cin >> userInput;
   
   for (int i = 0; i < userInput; i++) {
      printf("%s\n", HeadsOrTails().c_str());
   }

   return 0;
}
