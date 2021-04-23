/*
Write a program whose input is a character and a string, and whose output indicates the number of times the character appears in the string.

Ex: If the input is:

n Monday
the output is:

1
Ex: If the input is:

z Today is Monday
the output is:

0
Ex: If the input is:

n It's a sunny day
the output is:

2
Case matters. n is different than N.

Ex: If the input is:

n Nobody
the output is:

0
*/

import java.util.Scanner;

public class LabProgram {
   
   /* Define your method here */
   public static int countCharacters(char userChar, String userString) {
      int count = 0;
      for (int i = 0; i < userString.length(); i++) {
         if (userChar == userString.charAt(i)) {
            count++;
         }
      }
      return count;
   }
   
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      char checkChar = scan.next().charAt(0);
      String userInputString = scan.next();
      
      int charCount = countCharacters(checkChar, userInputString);
      
      System.out.printf("%d\n", charCount);
   }
}
