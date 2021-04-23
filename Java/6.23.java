/*
One lap around a standard high-school running track is exactly 0.25 miles. Write a program that takes a number of miles as input, and outputs the number of laps.

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
System.out.printf("%.2f", yourValue);

Ex: If the input is:

1.5
the output is:

6.00
Ex: If the input is:

2.2
the output is:

8.80
*/

import java.util.Scanner;

public class LabProgram {
   
   /* Define your method here */ 
   public static double milesToLaps(double userMiles) {
      final double MILES_PER_LAP = 0.25;
      return userMiles / MILES_PER_LAP;
   }
   
   public static void main(String[] args) {
      /* Type your code here. Your code must call the method.  */
      Scanner scan = new Scanner(System.in);
      double miles = scan.nextDouble();
      double laps = milesToLaps(miles);
      
      System.out.printf("%.2f", laps);
   }
}
