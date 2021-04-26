/*
Write a program that reads an integer, a list of words, and a character. The integer signifies how many words are in the list. The output of the program is every word in the list that contains the character at least once. For coding simplicity, follow each output word by a comma, even the last one. Assume at least one word in the list will contain the given character.

Ex: If the input is:

4 hello zoo sleep drizzle z
then the output is:

zoo,drizzle,
To achieve the above, first read the list into a vector. Keep in mind that the character 'a' is not equal to the character 'A'.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Type your code here. */
   vector<string> userInput;
   int totalInput;
   char inputCheck;
   
   cin >> totalInput;
   userInput.resize(totalInput);
   
   for (int i = 0; i < totalInput; i++) {
      cin >> userInput.at(i);
   }
   
   cin >> inputCheck;
   
   for (int i = 0; i < totalInput; i++) {
      for (int j = 0; j < totalInput; j++) {
         if (userInput[i][j] == inputCheck) {
            cout << userInput.at(i) << ",";
            break;
         }
      }
   }

   return 0;
}
