/*
Forms often allow a user to enter an integer. Write a program that takes in a string representing an integer as input, and outputs yes if every character is a digit 0-9.

Ex: If the input is:

1995
the output is:

yes
Ex: If the input is:

42,000
or

1995!
the output is:

no
*/
import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
      String num = scan.next();
      int flag = 0;
      
      for(int i = 0;i < num.length();i++) {
         char ch = num.charAt(i);
         if(Character.isDigit(ch) == false) {
            flag = 1;
            break;
         }
      }
      if(flag == 1) {
         System.out.println("no");
      }
      else {
         System.out.println("yes");
      }
   }
}
