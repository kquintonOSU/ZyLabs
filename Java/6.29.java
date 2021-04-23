/*
Write a program that simulates flipping a coin to make decisions. The input is how many decisions are needed, and the output is either heads or tails. Assume the input is a value greater than 0.

Ex: If the input is:

3
the output is:

tails
heads
tails
For reproducibility needed for auto-grading, seed the program with a value of 2. In a real program, you would seed with the current time. In that case, every program's output would be different, which is what is desired but can't be auto-graded.

Note: A common student mistake is to create an instance of Random before each call to rand.nextInt(). But seeding should only be done once, at the start of the program, after which rand.nextInt() can be called any number of times.

Your program must define and call the following method that randomly picks 0 or 1 and returns "heads" or "tails". Assume the value 0 represents "heads" and 1 represents "tails".
*/

import java.util.Scanner;
import java.util.Random;

public class LabProgram {
   
   /* Define your method here */
   public static String headsOrTails(Random rand) {
      int randomNum = rand.nextInt(2);
      
      if (randomNum == 0) {
         String ans = "heads";
         return ans;
      }
      else {
         String ans = "tails";
         return ans;
      }
   }
   
   public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
      Random rand = new Random(2); // Unique seed
      // Add more variables as needed

      /* Type your code here. */
      int decisions = scan.nextInt();      
      for (int i = 0; i < decisions; i++) {
         System.out.printf("%s\n", headsOrTails(rand));
      }      
   }
}
