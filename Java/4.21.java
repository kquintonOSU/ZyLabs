/*
Given a line of text as input, output the number of characters excluding spaces, periods, or commas.

Ex: If the input is:

Listen, Mr. Jones, calm down.
the output is:

21
Note: Account for all characters that aren't spaces, periods, or commas (Ex: "r", "2", "!").
*/

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
      String userText;
      int count = 0;
   
      userText = scan.nextLine();
      
      for (int i = 0; i < userText.length(); i++) {
         count++;
         if ((userText.charAt(i) == ' ') || (userText.charAt(i) == '.') || (userText.charAt(i) == ',')) {
            count--;
         }
      }
      System.out.printf("%d\n", count);
   }
}
