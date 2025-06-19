#include <stdio.h>

int main(void) {
	int menu, amount, balance = 10000;
	
	while (1) {
	printf("===== ATM Menu =====\n");
	printf("1. Deposit\n");
	printf("2. Withdraw\n");
	printf("3. Check Balance\n");
	printf("0. Exit\n");
	printf("Select menu: ");
	scanf("%d", &menu);
	if (menu == 1) {
		printf("Enter deposit amount: ");
		scanf("%d", &amount);
		balance += amount;
		printf("Deposit successful.");
	}
	else if (menu == 2) {
		printf("Enter withdraw amount: ");
		scanf("%d", &amount);
		if (balance - amount < 0) printf("Insufficient funds!");
		else {
			balance -= amount;
			printf("Withdrawal successful.");
		}
	}
	else if (menu == 3) {
		printf("Current balance: %d", balance);
	}
	else if (!menu) {
		printf("Goodbye!");
		break;
	}
	printf("\n\n");
	}



	return 0;
}
