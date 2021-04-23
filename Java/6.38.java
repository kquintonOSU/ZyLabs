/*
A contact list is a place where you can store a specific contact with other associated information such as a phone number, email address, birthday, etc. Write a program that first takes as input an integer N that represents the number of word pairs in the list to follow. Word pairs consist of a name and a phone number (both strings). That list is followed by a name, and your program should output the phone number associated with that name. Assume that the list will always contain less than 20 word pairs.

Ex: If the input is:

3 Joe 123-5432 Linda 983-4123 Frank 867-5309 
Frank
the output is:

867-5309
Your program must define and call the following method. The return value of getPhoneNumber() is the phone number associated with the specific contact name.
*/

import java.util.Scanner; 

public class LabProgram {
   
   /* Define your method here */
   public static String getPhoneNumber(String[] nameVec, String[] phoneNumberVec, String contactName, int arraySize) {
      String phoneNumber = "";
      for (int i = 0; i < arraySize; i++) {
         if (contactName.equals(nameVec[i])) {
            phoneNumber = phoneNumberVec[i];
         }
      }
      return phoneNumber;
   }
   
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      String[] inputNames = new String[20];
      String[] inputNumbers = new String [20];
      int totalContacts;
      String searchName, numberResult;
      
      totalContacts = scan.nextInt();
      
      for (int i = 0; i < totalContacts; i++) {
         inputNames[i] = scan.next();
         inputNumbers[i] = scan.next();
      }
      
      searchName = scan.next();
      
      numberResult = getPhoneNumber(inputNames, inputNumbers, searchName, totalContacts);
      
      System.out.printf("%s\n", numberResult);
      
   }
}
