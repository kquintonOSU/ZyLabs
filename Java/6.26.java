/*
Write a method drivingCost() with input parameters drivenMiles, milesPerGallon, and dollarsPerGallon, that returns the dollar cost to drive those miles. All items are of type double. If the method is called with 50 20.0 3.1599, the method returns 7.89975.

Define that method in a program whose inputs are the car's miles/gallon and the gas dollars/gallon (both doubles). Output the gas cost for 10 miles, 50 miles, and 400 miles, by calling your drivingCost() method three times.

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
System.out.printf("%.2f", yourValue);

The output ends with a newline.

Ex: If the input is:

20.0 3.1599
the output is:

1.58 7.90 63.20
*/

import java.util.Scanner;

public class LabProgram {
   
   /* Define your method here */
   public static double drivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) {
      double dollarCost = (drivenMiles / milesPerGallon) * dollarsPerGallon; 
      
      return dollarCost;
   }
   
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      double mpg = scan.nextDouble();
      double dpg = scan.nextDouble();
      
      System.out.printf("%.2f %.2f %.2f\n", drivingCost(10, mpg, dpg), drivingCost(50, mpg, dpg), drivingCost(400, mpg, dpg));
   }
}
