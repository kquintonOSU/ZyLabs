/*
An acronym is a word formed from the initial letters of words in a set phrase. Write a program whose input is a phrase and whose output is an acronym of the input. If a word begins with a lower case letter, don't include that letter in the acronym. Assume there will be at least one upper case letter in the input.

Ex: If the input is:

Institute of Electrical and Electronics Engineers
the output should be:

IEEE
*/

import java.util.Scanner;

public class LabProgram {
   
   /* Define your method here */
   public static String createAcronym(String userPhrase) {
      String acronym = "";
      for (int i = 0; i < userPhrase.length(); i++) {
         if ((userPhrase.charAt(i) > 64) && (userPhrase.charAt(i) < 91)) {
            acronym = acronym + userPhrase.charAt(i);
         }
      }
      return acronym;
   }
   
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      String userInput = scan.nextLine();
      
      String acronym = createAcronym(userInput);
      System.out.printf("%s\n", acronym);
   }
}
