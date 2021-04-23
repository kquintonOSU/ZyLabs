/*

Many user-created passwords are simple and easy to guess. Write a program that takes a simple password and makes it stronger by replacing characters using the key below, and by appending "q*s" to the end of the input string.

i becomes !
a becomes @
m becomes M
B becomes 8
o becomes .
Ex: If the input is:

mypassword
the output is:

Myp@ssw.rdq*s
*/
import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      /* Type your code here. */
      Scanner in = new Scanner(System.in);
      String s = in.nextLine();
      String newPassword = "";
      
         for (int i = 0; i < s.length(); ++i) {
            if(s.charAt(i)=='i')
               newPassword += "!";
            else if(s.charAt(i)=='a')
               newPassword += "@";
            else if(s.charAt(i)=='m')
               newPassword += "M";
            else if(s.charAt(i)=='B')
               newPassword += "8";
            else if(s.charAt(i)=='o')
               newPassword += ".";
            else
               newPassword += s.charAt(i);
        }
        
        newPassword += "q*s";
        System.out.println(newPassword);
   }
}
