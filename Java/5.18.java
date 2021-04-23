/*
Write a program that reads an integer, a list of words, and a character. The integer signifies how many words are in the list. The output of the program is every word in the list that contains the character at least once. Assume at least one word in the list will contain the given character. Assume that the list of words will always contain fewer than 20 words.

Ex: If the input is:

4 hello zoo sleep drizzle z
then the output is:

zoo
drizzle
To achieve the above, first read the list into an array. Keep in mind that the character 'a' is not equal to the character 'A'.
*/

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      String[] userInputs = new String[20];
      char userCheck;
      int arrSize = scan.nextInt();
      
      for (int i = 0; i < arrSize; i++) {
         userInputs[i] = scan.next();
      }
      
      userCheck = scan.next().charAt(0);
      
      for (int i = 0; i < arrSize; i++) {
         for (int j = 0; j < userInputs[i].length(); j++) {
            if (userInputs[i].charAt(j) == userCheck) {
               if (userInputs[j].equals(userInputs[j])) {
                  System.out.printf("%s\n", userInputs[i]);
               }
            }
         }
      }
   }
}
