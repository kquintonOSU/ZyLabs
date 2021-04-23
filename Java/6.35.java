/*
A common year in the modern Gregorian calendar consists of 365 days. In reality, the earth takes longer to rotate around the sun. To account for the difference in time, every 4 years, a leap year takes place. A leap year is when a year has 366 days: An extra day, February 29th. The requirements for a given year to be a leap year are:

1) The year must be divisible by 4

2) If the year is a century year (1700, 1800, etc.), the year must be evenly divisible by 400

Some example leap years are 1600, 1712, and 2016.

Write a program that takes in a year and determines whether that year is a leap year.

Ex: If the input is:

1712
the output is:

1712 is a leap year. 
Ex: If the input is:

1913
the output is:

1913 is not a leap year.
*/

import java.util.Scanner; 

public class LabProgram {

   /* Define your method here */
   public static boolean isLeapYear(int userYear) {
      if (userYear % 4 == 0 && (userYear % 100 != 0 || userYear % 400 == 0)) {
         return true;
      }
      else {
         return false;
      }
   }

   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      int userInput = scan.nextInt();
      
      boolean leapYearResult = isLeapYear(userInput);
      
      if (leapYearResult) {
         System.out.printf("%d is a leap year.\n", userInput);
      }
      else {
         System.out.printf("%d is not a leap year.\n", userInput);
      }
   }
}
