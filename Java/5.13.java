/*
Write a program that reads a list of integers, and outputs those integers in reverse. The input begins with an integer indicating the number of integers that follow. For coding simplicity, follow each output integer by a space, including the last one. Assume that the list will always contain fewer than 20 integers.

Ex: If the input is:

5 2 4 6 8 10
the output is:

10 8 6 4 2
To achieve the above, first read the integers into an array. Then output the array in reverse.
*/

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
   //   int[] userList = new int[20];   // List of numElement integers specified by the user
      int numElements;                // Number of integers in user's list
      // Add more variables as needed

      numElements = scnr.nextInt();   // Input begins with number of integers that follow
      
      /* Type your code here. */
      int[] userList = new int[numElements];
      
      for (int i = 0; i < numElements; i++) {
         userList[i] = scnr.nextInt();
      }
      
      for (int i = 0; i < (userList.length / 2); i++) {
         int temp = userList[i];
         userList[i] = userList[userList.length - 1 - i];
         userList[userList.length - 1 - i] = temp;
      }
      
      for (int i = 0; i < userList.length; i++) {
         System.out.printf("%d ", userList[i]);
      }
      
      System.out.println();
   }
}
