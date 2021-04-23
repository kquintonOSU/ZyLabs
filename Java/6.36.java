/*
Write a program with total change amount as an integer input that outputs the change using the fewest coins, one coin type per line. The coin types are dollars, quarters, dimes, nickels, and pennies. Use singular and plural coin names as appropriate, like 1 penny vs. 2 pennies.

Ex: If the input is:

0
or less, output:

no change
Ex: If the input is:

45
the output is:

1 quarter
2 dimes
*/

import java.util.Scanner; 

public class LabProgram {
   
   /* Define your method here */
   public static void exactChange(int userTotal, int[] coinVals) {
      int[] coinValue = {100, 25, 10, 5, 1};
      for (int i = 0; i < coinVals.length; i++) {
         coinVals[i] = userTotal / coinValue[i];
         userTotal %= coinValue[i];
      }
   }
   
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      int[] coins = new int[5];
      int userInput = scan.nextInt();
      
      if(userInput < 1) {
         System.out.println("no change");
      }
      else {
         exactChange(userInput, coins);
         if (coins[0] == 1) {
            System.out.println(coins[0] + " dollar");
         }
         else if (coins[0] >= 1) {
            System.out.println(coins[0] + " dollars");
         }
         if (coins[1] == 1) {
            System.out.println(coins[1] + " quarter");
         }
         else if (coins[1] > 1) {
            System.out.println(coins[1] + " quarters");
         }
         if (coins[2] == 1) {
            System.out.println(coins[2] + " dime");
         }
         if (coins[2] > 1) {
            System.out.println(coins[2] + " dimes");
         }
         if (coins[3] == 1) {
            System.out.println(coins[3] + " nickel");
         }
         if (coins[3] > 1) {
            System.out.println(coins[3] + " nickels");
         }
         if (coins[4] == 1) {
            System.out.println(coins[4] + " penny");
         }
         if (coins[3] > 1) {
            System.out.println(coins[3] + " nickels");
         }
      }     
   }
}
