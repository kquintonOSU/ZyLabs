/*
Write a program that reads a list of words. Then, the program outputs those words and their frequencies. The input begins with an integer indicating the number of words that follow. Assume that the list will always contain fewer than 20 words.

Ex: If the input is:

5 hey hi Mark hi mark
the output is:

hey - 1
hi - 2
Mark - 1
hi - 2
mark - 1
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
   vector<string> userInputs;
   vector<int> wordCount;
   int totalValues;
   
   cin >> totalValues;
   
   userInputs.resize(totalValues);
   wordCount.resize(totalValues);
   
   for (int i = 0; i < totalValues; i++) {
      cin >> userInputs.at(i);
   }
   
   for (int i = 0; i < totalValues; i++) {
      for (int j = 0; j < totalValues; j++) {
         if (userInputs.at(i) == userInputs.at(j)) {
            wordCount.at(i) += 1;
         }
      }
   }
   
   for (int i = 0; i < totalValues; i++) {
      printf("%s - %d\n", userInputs.at(i).c_str(), wordCount.at(i));
   }

   return 0;
}
