/*
Write a method maxMagnitude() with two integer input parameters that returns the largest magnitude value. Use the method in a program that takes two integer inputs, and outputs the largest magnitude value.

Ex: If the inputs are:

5 7
the method returns:

7
Ex: If the inputs are:

-8 -2
the method returns:

-8
*/

import java.util.Scanner;

public class LabProgram {

   /* Define your method here */
   public static int maxMagnitude(int userVal1, int userVal2) {
      int x = Math.abs(userVal1);
      int y = Math.abs(userVal2);
      
      if (x > y) {
         return userVal1;
      }
      else {
         return userVal2;
      }
   }

   public static void main(String[] args) {
      /* Type your code here */
      Scanner scan = new Scanner(System.in);
      int userInput1 = scan.nextInt();
      int userInput2 = scan.nextInt();
      
      int maxNum = maxMagnitude(userInput1, userInput2);
      
      System.out.printf("%d\n", maxNum);
   }
}
