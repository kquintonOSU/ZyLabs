/*
Statistics are often calculated with varying amounts of input data. Write a program that takes any number of non-negative integers as input, and outputs the average and max. A negative integer ends the input and is not included in the statistics.

Ex: When the input is:

15 20 0 5 -1
the output is:

10 20
You can assume that at least one non-negative integer is input.
*/

import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      
      int userInput;
      int max;
      int count = 0;
      int avg = 0;
      
      userInput = scan.nextInt();
      max = userInput;
      while (userInput >= 0) {
         if (max < userInput) {
            max = userInput;
         }
         avg += userInput;
         count++;
         
         userInput = scan.nextInt();
      }
      avg = avg / count;
      
      System.out.printf("%d %d\n", avg, max);
      
      
   }
}
