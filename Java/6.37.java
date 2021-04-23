/*
Write a program that reads a list of integers, and outputs whether the list contains all even numbers, odd numbers, or neither. The input begins with an integer indicating the number of integers that follow. Assume that the list will always contain less than 20 integers.

Ex: If the input is:

5 2 4 6 8 10
the output is:

all even
Ex: If the input is:

5 1 3 5 7 9
the output is:

all odd
Ex: If the input is:

5 1 2 3 4 5
the output is:

not even or odd
*/

import java.util.Scanner; 

public class LabProgram {
   
   /* Define your method here */
   public static boolean isArrayEven(int[] arrayValues, int arraySize) {
      boolean allEven = true;
      for (int i = 0; i < arraySize; i++) {
         if (arrayValues[i] % 2 != 0) {
            allEven = false;
         }
      }
      return allEven;
   }
   
   public static boolean isArrayOdd(int[] arrayValues, int arraySize) {
      boolean allOdd = true;
      for (int i = 0; i < arraySize; i++) {
         if (arrayValues[i] % 2 == 0) {
            allOdd = false;
         }
      }
      return allOdd;
   }
   
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      int[] userInputs = new int[20];
      
      int inputAmount = scan.nextInt();      
      for (int i = 0; i < inputAmount; i++) {
         userInputs[i] = scan.nextInt();
      }
      
      boolean evenArray = isArrayEven(userInputs, inputAmount);
      boolean oddArray = isArrayOdd(userInputs, inputAmount);
      
      if (evenArray) {
         System.out.println("all even");
      }
      else if (oddArray) {
         System.out.println("all odd");
      }
      else {
         System.out.println("not even or odd");
      }
   }
}
