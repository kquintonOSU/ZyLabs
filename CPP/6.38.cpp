/*
Write a program that reads a list of words. Then, the program outputs those words and their frequencies. 
The input begins with an integer indicating the number of words that follow.

Ex: If the input is:

5 hey hi Mark hi mark
the output is:

hey 1
hi 2
Mark 1
hi 2
mark 1
*/

#include <iostream>
#include <vector> 
#include <string>
using namespace std;

/* Define your function here */
int GetFrequencyOfWord(vector<string> wordsList,string currWord) {
   int counter=0;
   for(int i=0;i<wordsList.size();++i) {
      if(wordsList[i]==currWord)
      ++counter;
   }
   return counter;
}

int main() {
   /* Type your code here */
   int n, i;
   vector<string> wordsList;
   string word;

   cin>>n;
   for(i=0;i<n;++i) {
      cin >> word;
      wordsList.push_back(word); //add word to wordslist
   }

   for(i=0;i<n;++i) {
      cout << wordsList[i] << " " << GetFrequencyOfWord(wordsList,wordsList[i]) << endl;
   }

   return 0;
}
