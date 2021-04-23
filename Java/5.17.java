/*
Write a program that reads a list of words. Then, the program outputs those words and their frequencies. The input begins with an integer indicating the number of words that follow. Assume that the list will always contain fewer than 20 words.

Ex: If the input is:

5 hey hi Mark hi mark
the output is:

hey 1
hi 2
Mark 1
hi 2
mark 1
Hint: Use two arrays, one array for the strings and one array for the frequencies.
*/

import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      String[] userInput = new String[20];
      int[] wordCount = new int[20];
      
      int arrSize = scan.nextInt();
      
      for (int i = 0; i < arrSize; i++) {
         userInput[i] = scan.next();
      }
      
      for (int i = 0; i < arrSize; i++) {
         for (int j = 0; j < arrSize; j++) {
            if (userInput[i].equals(userInput[j])) {
               wordCount[i]++;
            }
         }
      }
      
      for (int i = 0; i < arrSize; i++) {
         System.out.printf("%s %d\n", userInput[i], wordCount[i]);
      }
   }
}
