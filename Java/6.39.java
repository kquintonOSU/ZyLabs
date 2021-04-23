/*
Write a program that gets a list of integers from input, and outputs the integers in ascending order (lowest to highest). The first integer indicates how many numbers are in the list. Assume that the list will always contain less than 20 integers.

Ex: If the input is:

5 10 4 39 12 2
the output is:

2 4 10 12 39
For coding simplicity, follow every output value by a space, including the last one.
*/

import java.util.Scanner;

public class LabProgram {

   /* Define your method here */
   public static void sortArray(int[] myArr, int arrSize) {
      for (int i = 0; i < arrSize - 1; i++) {
         for (int j = 0; j < arrSize - i - 1; j++) {
            if (myArr[j] > myArr[j+1]) {
               int tempVal = myArr[j];
               myArr[j] = myArr[j+1];
               myArr[j+1] = tempVal;
            }
         }
      }
      
      for (int i = 0; i < arrSize; i++) {
         System.out.printf("%d ", myArr[i]);
      }
      System.out.println();
   }

   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      int[] inputValues = new int[20];
      int totalValues;
      
      totalValues = scan.nextInt();
      
      for (int i = 0; i < totalValues; i++) {
         inputValues[i] = scan.nextInt();
      }
      
      sortArray(inputValues, totalValues);
   }
}
