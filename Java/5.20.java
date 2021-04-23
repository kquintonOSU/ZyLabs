/*
Write a program that reads a list of integers, and outputs the two smallest integers in the list, in ascending order. The input begins with an integer indicating the number of integers that follow. You can assume that the list will have at least 2 integers and fewer than 20 integers.

Ex: If the input is:

5 10 5 3 21 2
the output is:

2 3
To achieve the above, first read the integers into an array.
*/

import java.util.Scanner;
import java.util.Arrays;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      int[] userInputs;
      int totalInputs, smallest, secondSmallest;
      
      totalInputs = scan.nextInt();
      userInputs = new int[totalInputs];
      for (int i = 0; i < totalInputs; i++) {
         userInputs[i] = scan.nextInt();
      }
      
      Arrays.sort(userInputs);
      
      System.out.printf("%d %d\n", userInputs[0], userInputs[1]);
         
      
   }
}
