
package MyProject;

import java.util.Scanner;
public class BankApplication {
    public static void main(String args[]) {
		System.out.println("Please Enter Account name & Account Id : ");
		Scanner input = new Scanner(System.in);
		String account_name, account_number;
		account_name = input.nextLine();
		account_number = input.nextLine();
		
		BankAccount obj = new BankAccount(account_name,account_number);
		obj.menu();
	}
}