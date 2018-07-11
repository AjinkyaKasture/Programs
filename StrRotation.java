package Interview;

import java.util.Scanner;

public class StrRotation {

    public static void main(String[] args) {
    
    	Scanner input = new Scanner(System.in); // It is Object of Scanner Class
		
		System.out.println("Enter the string : " );
		String s1= input.next();
		
		System.out.println("Enter second string : " );
		String s2= input.next();
    	
    	
        //Method to check lengths of two strings are equal or not
 
        if(s1.length() != s2.length()) {
        
            System.out.println("s2 is not rotated version of s1");
        }
        else {
        
            
 
            String s3 = s1 + s1;
 
            // contains method will check s2 is substring of s3 or not
 
            if(s3.contains(s2)) {
            
                System.out.println("s2 is a rotation of s1");
            }
            else {
            
                System.out.println("s2 is not rotation of s1");
            }
        }
    }
}