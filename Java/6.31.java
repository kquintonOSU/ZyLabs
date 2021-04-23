/*
Write a program that removes all spaces from the given input.

Ex: If the input is:

Hello my name is John.
the output is:

HellomynameisJohn.
*/

import java.util.Scanner; 

public class LabProgram {
   
   /* Define your method here */
   public static String removeSpaces(String userString) {
      return userString.replaceAll(" ","");
   }
   
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      String userInputString = scan.nextLine();
      
      String revisedUserString = removeSpaces(userInputString);
      
      System.out.printf("%s\n", revisedUserString);
   }
}
