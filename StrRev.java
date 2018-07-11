package Interview;

import java.util.Scanner;

public class StrRev {
	
	public static void main(String[] args) {

			String str ;
			String rev = "";
			
			Scanner input = new Scanner(System.in); // It is Object of Scanner Class
			
			System.out.println("Enter the string : " );
			str = input.next();

			int strLength = str.length(); // Variable strLength stores the Length of String

			for(int i = strLength-1 ; i >= 0; i--) {
				
				rev = rev + str.charAt(i); //Variable rev stores the Reverse of a String
			}


			System.out.println("The Reverse String is : " +rev ); // Printing The Reverse String
			
	}
}

