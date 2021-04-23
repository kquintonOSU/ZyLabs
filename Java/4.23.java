/*
Write a program whose input is two integers, and whose output is the first integer and subsequent increments of 10 as long as the value is less than or equal to the second integer.

Ex: If the input is:

-15 30
the output is:

-15 -5 5 15 25
Ex: If the second integer is less than the first as in:

20 5
the output is:

Second integer can't be less than the first.
For coding simplicity, output a space after every integer, including the last.
*/

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner sc = new Scanner(System.in);
      int x=sc.nextInt();
      int y=sc.nextInt();
      
      if(y<x) {
           System.out.println("Second integer can't be less than the first.");
      }
      else {
         for(int i=x;i<=y;i+=10)
            System.out.print(i+" ");
            System.out.print("\n");
      }
   }
}
