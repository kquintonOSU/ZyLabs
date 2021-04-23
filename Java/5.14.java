/*
Given a sorted list of integers, output the middle integer. Assume the number of integers is always odd.

Ex: If the input is:

2 3 4 8 11 -1 
(where a negative indicates the end), the output is:

4
The maximum number of inputs for any test case should not exceed 9. If exceeded, output "Too many inputs".

Hint: First read the data into an array. Then, based on the array's size, find the middle item.
*/

import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int[] userValues = new int[9];  // Set of data specified by the user      
      int i=0,middle,j,num;
      int n=0;
      try{
         while (true) {
            num = scnr.nextInt();
            if (num < 0){
               break;
            }
            userValues[i++] = num;
            n++;
         }
         middle = i/2;
         System.out.println(userValues[middle]);
      }
      catch(ArrayIndexOutOfBoundsException e) {
         System.out.println("Too many inputs");
      }
   }
}
