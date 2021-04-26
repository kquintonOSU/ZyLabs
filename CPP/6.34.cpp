/*
A contact list is a place where you can store a specific contact with other associated information such as a phone number, 
email address, birthday, etc. Write a program that first takes as input an integer N that represents the number of word pairs in the list to follow. 
Word pairs consist of a name and a phone number (both strings). That list is followed by a name, and your program should output the phone number 
associated with that name.

Ex: If the input is:

3 Joe 123-5432 Linda 983-4123 Frank 867-5309 
Frank
the output is:

867-5309
*/

#include <iostream>
#include <vector>
using namespace std;

/* Define your function here */
string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName) {
   for (int i = 0; i < nameVec.size(); ++i) {
      if (nameVec[i] == contactName)
         return phoneNumberVec[i];
   }
   return "Contact doesn't exists!";
}

int main() {
   /* Type your code here */
   string name, number;
   vector<string> nameVec, phoneNumberVec;
   int n;
   cin >> n;
   for (int i = 0; i < n; ++i) {
      cin >> name >> number;
      nameVec.push_back(name);
      phoneNumberVec.push_back(number);
   }
   cin >> name;
   cout << GetPhoneNumber(nameVec, phoneNumberVec, name) << endl;

   return 0;
}
