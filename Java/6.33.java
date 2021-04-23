/*
Write a program whose inputs are three integers, and whose outputs are the largest of the three values and the smallest of the three values.

Ex: If the input is:

7 15 3
the output is:

largest: 15 
smallest: 3
*/

import java.util.Scanner; 

public class LabProgram {
   
   /* Define your method here */
   public static int largestNumber(int num1, int num2, int num3) {
      return Math.max(num1,Math.max(num2,num3));
   }
   
   public static int smallestNumber(int num1, int num2, int num3) {
      return Math.min(num1,Math.min(num2,num3));
   }
   
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      int userInput1 = scan.nextInt();
      int userInput2 = scan.nextInt();
      int userInput3 = scan.nextInt();
      
      int maxNum = largestNumber(userInput1, userInput2, userInput3);
      int minNum = smallestNumber(userInput1, userInput2, userInput3);
      
      System.out.printf("largest: %d\n", maxNum);
      System.out.printf("smallest: %d\n", minNum);
   }
}
