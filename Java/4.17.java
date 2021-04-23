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
*/
import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      
      char inputChar = scan.next().charAt(0);
      String inputString = scan.nextLine();
      int count = 0;
      
      for (int i = 0; i < inputString.length() - 1; i++) {
         if (inputChar == inputString.charAt(i)) {
            count++;
         }
      }
      System.out.printf("%d\n", count);
   }
}
