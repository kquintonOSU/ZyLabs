/*
(1) Prompt the user to enter five numbers, being five people's weights. Store the numbers in an array of doubles. Output the array's numbers on one line, each number followed by one space. (2 pts)

Ex:

Enter weight 1:
236.0
Enter weight 2:
89.5
Enter weight 3:
142.0
Enter weight 4:
166.3
Enter weight 5:
93.0
You entered: 236.0 89.5 142.0 166.3 93.0
(2) Also output the total weight, by summing the array's elements. (1 pt)

(3) Also output the average of the array's elements. (1 pt)

(4) Also output the max array element. (2 pts)


Ex:

Enter weight 1:
236.0
Enter weight 2:
89.5
Enter weight 3:
142.0
Enter weight 4:
166.3
Enter weight 5:
93.0
You entered: 236.0 89.5 142.0 166.3 93.0

Total weight: 726.8
Average weight: 145.35999999999999
Max weight: 236.0
*/

import java.util.Scanner;

public class PeopleWeights {
   public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);

      /* Type your code here. */
      double[] userInputs = new double[5];
      double maxWeight, totalWeight = 0, avgWeight = 0;
      
      maxWeight = userInputs[0];
      for (int i = 0; i < userInputs.length; i++) {
         System.out.println("Enter weight " + (i + 1) +":");
         userInputs[i] = scan.nextDouble();
         if (maxWeight < userInputs[i]) {
            maxWeight = userInputs[i];
         }
         totalWeight += userInputs[i];
      }
      
      avgWeight = totalWeight / 5;
      
      System.out.print("You entered: ");
      for (int i = 0; i < userInputs.length; i++) {
         System.out.printf("%.1f ", userInputs[i]);
      }
      
      System.out.println();
      System.out.println();
      
      System.out.printf("Total weight: %.1f\n", totalWeight);
      System.out.printf("Average weight: %f\n", avgWeight);
      System.out.printf("Max weight: %.1f\n", maxWeight);
      
      
   }
}
