
package MyProject;

import java.util.Scanner;
public class Reverse {
    public static void main(String[] args) {
		
	int a,remainder=0,n;
	Scanner sc=new Scanner(System.in);
		 
	System.out.println("Enter a number");
	 n=sc.nextInt();
	 
	 while(n!=0)
	 { 
		 a=n%10;
		 remainder=(remainder*10)+a;
		 n=n/10;
	 }
	 System.out.println("reverse of a number is"+remainder);
    }
 }   
}
