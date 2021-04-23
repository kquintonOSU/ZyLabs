/*
Mad Libs are activities that have a person provide various words, which are then used to complete a short story in unexpected (and hopefully funny) ways.

Write a program that takes a string and integer as input, and outputs a sentence using those items as below. The program repeats until the input string is quit.
*/

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner in = new Scanner(System.in);
        String word;
        int count;
        while (true) {
            word = in.next();
            count = in.nextInt();
            if (word.equals("quit") && count == 0)
                break;
            System.out.println("Eating " + count + " " + word + " a day keeps you happy and healthy.");
        }
    
   }
}
