/*
Write a program whose input is two integers and whose output is the two integers swapped. Place the values in an array, where x is position 0 and y is position 1.

Ex: If the input is:

3 8
then the output is:

8 3
*/

import java.util.Scanner;

public class LabProgram {
   
   /* Define your method here */
   public static void swapValues(int[] values) {
      int tempVal = values[0];
      values[0] = values[values.length - 1];
      values[values.length - 1] = tempVal;
   }
   
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      int[] userValues = new  int[2];
      
      for (int i = 0; i < userValues.length; i++) {
         userValues[i] = scan.nextInt();
      }
      
      swapValues(userValues);
      
      for (int i = 0; i < userValues.length; i++) {
         System.out.printf("%d ", userValues[i]);
      }
      System.out.println();
      
      
   }
}
