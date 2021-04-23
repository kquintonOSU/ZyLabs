/*
A pedometer treats walking 2,000 steps as walking 1 mile. Write a program whose input is the number of steps, and whose output is the miles walked.

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
System.out.printf("%.2f", yourValue);

Ex: If the input is:

5345
the output is:

2.67
*/

import java.util.Scanner;

public class LabProgram {
   
   /* Define your method here */
   public static double stepsToMiles(int userSteps) {
      final int STEPS_IN_MILE = 2000;
      return (double)userSteps / STEPS_IN_MILE;
   }
   
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      int steps = scan.nextInt();
      double miles = stepsToMiles(steps);
      
      System.out.printf("%.2f", miles);
   }
}
