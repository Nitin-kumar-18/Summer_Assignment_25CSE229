#include <stdio.h>

int main() {
    float balance = 1000, amount;
    int choice;

    do {
        printf("\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Check Balance");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount: ");
                scanf("%f", &amount);
                balance += amount;
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);

                if(amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient Balance!\n");
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}