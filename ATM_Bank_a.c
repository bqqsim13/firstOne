#include <stdio.h>

int main()
{
    float balance = 0.0;
    int choice;

    printf("Welcome to the ATM Bank!\n");

    do
    {
        printf("\nSelect an operation:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        while (scanf("%d", &choice) != 1)
        {
            // Clear the input buffer
            while (getchar() != '\n')
                ;
            printf("Invalid input. Please enter a number: ");
        }

        switch (choice)
        {
        case 1:
        {
            printf("-------------------------------\n");
            float depositAmount;
            printf("Enter the amount to deposit: ");
            while (scanf("%f", &depositAmount) != 1)
            {
                // Clear the input buffer
                while (getchar() != '\n')
                    ;
                printf("Invalid input. Please enter a number: ");
            }
            if (depositAmount > 0)
            {
                balance += depositAmount;
                printf("Amount %.2f deposited successfully. Balance is now %.2f\n", depositAmount, balance);
            }
            else
            {
                printf("It is not possible to deposit a negative amount. Please try again.");
            }
            break;
        }

        case 2:
        {
            printf("-------------------------------\n");
            float withdrawAmount;
            printf("Enter the amount to withdraw: ");
            while (scanf("%f", &withdrawAmount) != 1)
            {
                // Clear the input buffer
                while (getchar() != '\n')
                    ;
                printf("Invalid input. Please enter a number: ");
            }
            if (withdrawAmount > balance)
            {
                printf("Insufficient balance. Unable to withdraw.\n");
            }
            else if (withdrawAmount < 0)
            {
                printf("It is not possible to withdraw a negative amount. Please try again.");
            }

            else
            {
                balance -= withdrawAmount;
                printf("Amount %.2f withdrawn successfully. Balance is now %.2f\n", withdrawAmount, balance);
            }
            break;
        }

        case 3:
            printf("-------------------------------\n");
            printf("Current balance: %.2f\n", balance);
            break;

        case 0:
            printf("Exiting the ATM Bank. Thank you!\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}
