/*
Summary: Given integer values for red, green, and blue, subtract the gray from each value.

Computers represent color by combining the sub-colors red, green, and blue (rgb). Each sub-color's value can range from 0 to 255. Thus (255, 0, 0) is bright red, (130, 0, 130) is a medium purple, (0, 0, 0) is black, (255, 255, 255) is white, and (40, 40, 40) is a dark gray. (130, 50, 130) is a faded purple, due to the (50, 50, 50) gray part. (In other words, equal amounts of red, green, blue yield gray).

Given values for red, green, and blue, remove the gray part.

Ex: If the input is:

130 50 130
the output is:

80 0 80
Find the smallest value, and then subtract it from all three values, thus removing the gray.
*/

import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner scan = new Scanner(System.in);
      
      int red = scan.nextInt();
      int green = scan.nextInt();
      int blue = scan.nextInt();
      
      if ((red < green) && (red < blue)) {
         green = green - red;
         blue = blue - red;
         red = red - red;
      }
      else if ((green < red) && (green < blue)) {
         red = red - green;
         blue = blue - green;
         green = green - green;
      }
      else {
         red = red - blue;
         green = green - blue;
         blue = blue - blue;
      }
      
      System.out.println(red + " " + green + " " + blue);
   }
}
