/*
Write a program that takes in an integer in the range 11-100 as input. The output is a countdown starting from the integer, and stopping when both output digits are identical. End with a newline.

Ex: If the input is:

93
the output is:

93 92 91 90 89 88
Ex: If the input is:

11
the output is:

11
Ex: If the input is:

9
or any number not between 11 and 100 (inclusive), the output is:

Input must be 11-100
For coding simplicity, follow each output number by a space, even the last one.
*/

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      int userInput = scan.nextInt();
      
      if ((userInput < 101) && (userInput > 10)) {
         while ((userInput % 11) != 0) {
            System.out.printf("%d ", userInput);
            userInput--;
         }
         System.out.printf("%d \n", userInput);
      }
      else {
         System.out.printf("Input must be 11-100\n");
      }
   }
}
