// Week 5, session 1

/* Task 2.3
 * Write a C program that perform the same function as the following Python program.
 
	Python program:
	balance = 100.0

	# Display ATM menu
	print("\nATM Menu")
	print("1. Check Balance")
	print("2. Deposit Money")
	print("3. Withdraw Money")
	
	choice = int(input("Enter your choice: "))

	match choice:
		case 1:
			print(f"Current balance: {balance:.2f}")

		case 2:
			amount = float(input("Enter amount to deposit: "))
			if amount > 0:
				balance += amount
				print(f"Deposited: {amount:.2f}")
				print(f"Current balance: {balance:.2f}")
			else:
				print("Invalid deposit amount")

		case 3:
			amount = float(input("Enter amount to withdraw: "))
			if amount > 0 and amount <= balance:
				balance -= amount
				print(f"Withdrawn: {amount:.2f}")
				print(f"Current balance: {balance:.2f}")
			else:
				print("Insufficient balance or invalid amount")
		
		case _:
			print("Invalid choice. Please try again.")
 */
 
#include <stdio.h>

int main(void) {
    int choice;
    double balance = 100.0; //init balance to 100
    double amount;

	/* Display ATM menu */
	printf("\nATM Menu\n");
	printf("1. Check Balance\n");
	printf("2. Deposit Money\n");
	printf("3. Withdraw Money\n");
	printf("Enter your choice: ");
	scanf("%d", &choice); //enter the choice

	// complete the rest of the code
	switch (choice) {
		case 1:
			printf("Current balance: %.2lf", balance);
			break;
		case 2:
			printf("Enter amount to deposit");
			scanf("%lf", &amount);
			balance = balance + amount;
			printf("Current balance: %.2lf", balance);
			break;
		case 3:
			printf("Choose amount to withdraw");
			scanf("%lf", &amount);
			if (amount>balance)
			{
				printf("Insufficient balance or invalid amount");				
			} else {
				balance = balance - amount;
				printf("Current balance: %.2lf", balance);
			}
			break;
		default:
			printf("Invalid choice. Please try again.\n");
	}

    return 0;
}