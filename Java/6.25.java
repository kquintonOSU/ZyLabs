/*
A “jiffy” is the scientific name for 1/100th of a second. Given an input number of seconds, output the number of "jiffies."

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
System.out.printf("%.2f", yourValue);

Ex: If the input is:

15
the output is:

1500.00
*/

import java.util.Scanner;

public class LabProgram {
   
   /* Define your method here */
   public static double secondsToJiffies(double userSeconds) {
      final double JIFFY = 0.01;
      return userSeconds / JIFFY;
   }
   
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      int userEnteredSeconds = scan.nextInt();
      double jiffies = secondsToJiffies(userEnteredSeconds);
      
      System.out.printf("%.2f", jiffies);
   }
}
