/*

When analyzing data sets, such as data for human heights or for human weights, a common step is to adjust the data. This can be done by normalizing to values between 0 and 1, or throwing away outliers.

For this program, adjust the values by subtracting the smallest value from all the values. The input begins with an integer indicating the number of integers that follow. Assume that the list will always contain fewer than 20 integers.

Ex: If the input is:

5 30 50 10 70 65
the output is:

20 40 0 60 55
The 5 indicates that there are five values in the list, namely 30, 50, 10, 70, and 65. 10 is the smallest value in the list, so is subtracted from each value in the list.

For coding simplicity, follow every output value by a space, including the last one.
*/

import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      int[] userValues;
      int numValues, minValue;
      
      numValues = scan.nextInt();
      userValues = new int[numValues];
      
      for (int i = 0; i < userValues.length; i++) {
         userValues[i] = scan.nextInt();
      }
      
      minValue = userValues[0];
      for (int i = 0; i < userValues.length; i++) {
         if (minValue > userValues[i]) {
            minValue = userValues[i];
         }
      }
      
      for (int i = 0; i < userValues.length; i++) {
         userValues[i] -= minValue;
         System.out.printf("%d ", userValues[i]);
      }
      System.out.println();
      
   }
}
