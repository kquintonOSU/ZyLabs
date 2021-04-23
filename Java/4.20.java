/*
Write a program that removes all spaces from the given input.

Ex: If the input is:

Hello my name is John.
the output is:

HellomynameisJohn.
*/

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      String userInput = scan.nextLine();
      
      userInput = userInput.replace(" ", "");
      
      System.out.printf("%s\n", userInput);
   }
}
