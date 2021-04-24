/*
Summary: Given integer values for red, green, and blue, subtract the gray from each value.

Computers represent color by combining the sub-colors red, green, and blue (rgb). Each sub-color's value can range from 0 to 255. Thus (255, 0, 0) is bright red, (130, 0, 130) is a medium purple, (0, 0, 0) is black, (255, 255, 255) is white, and (40, 40, 40) is a dark gray. (130, 50, 130) is a faded purple, due to the (50, 50, 50) gray part. (In other words, equal amounts of red, green, blue yield gray).

Given values for red, green, and blue, remove the gray part.

Ex: If the input is:

130 50 130
the output is:

80 0 80
*/

#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int c1, c2, c3, c4, c5, c6;
   
   cin >> c1;
   cin >> c2;
   cin >> c3;
   
   if (c1 < c2 && c1 < c3) {
      c4 = c1 - c1;
      c5 = c2 - c1;
      c6 = c3 - c1;
      
   }   
   else if (c2 < c1 && c2 < c3) {
      c4 = c1 - c2;
      c5 = c2 - c2;
      c6 = c3 - c2;
      
   }   
   else if (c3 < c1 && c3 < c2) {
      c4 = c1 - c3;
      c5 = c2 - c3;
      c6 = c3 - c3;
      
   }
   else {
      c4 = c1 - c1;
      c5 = c2 - c2;
      c6 = c3 - c3;
   }
   
   printf("%d %d %d\n", c4, c5, c6);

   return 0;
}
