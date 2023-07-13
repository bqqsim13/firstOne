#include <stdio.h>
#include <math.h>

#define MAX_ACCOUNTS 10

int main()
{
    float currentBalances[MAX_ACCOUNTS] = {0}; // New array to store current balances
    int choice;
    float interest;
    float balances[MAX_ACCOUNTS] = {0};
    int numAccounts;

    printf("Welcome to the ATM Bank!\n");
    printf("Enter the desired interest rate: ");
    scanf("%f", &interest);

    printf("Enter the number of accounts: ");
    scanf("%d", &numAccounts);

    // since the user will enter a whole number, dividing by 100 to make it %
    const float interestRate = interest / 100;

    // if the user continues to enter wrong inputs, the program will continue
    // to ask for a valid number of accounts.
    while (numAccounts <= 0 || numAccounts > MAX_ACCOUNTS)
    {
        printf("Invalid number of accounts. Please try again.\n");
        printf("Enter the number of accounts: ");
        scanf("%d", &numAccounts);
    }

    // using a for loop to go through each account and prompt the user to enter balances
    for (int i = 0; i < numAccounts; i++)
    {
        printf("Enter the balance for account %d: ", i + 1);
        scanf("%f", &balances[i]);
        currentBalances[i] = balances[i];
    }

    int currentAccount = 0;

    do
    {
        printf("\nCurrent Account: %d\n", currentAccount + 1);
        printf("Select an operation:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Future Balance Using Interest Rate\n");
        printf("5. Switch Account\n");
        printf("6. Display All Balances\n");
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
            scanf("%f", &depositAmount);
            if (depositAmount > 0)
            {
                currentBalances[currentAccount] += depositAmount;
                printf("Amount %.2f deposited successfully.\n", depositAmount);
            }
            else
            {
                printf("Error. Please try again.");
            }
            break;
        }

        case 2:
        {
            float withdrawAmount;
            printf("-------------------------------\n");
            printf("Enter the amount to withdraw: ");
            scanf("%f", &withdrawAmount);
            if (withdrawAmount > currentBalances[currentAccount])
            {
                printf("Insufficient balance. Unable to withdraw.\n");
            }
            else if (withdrawAmount < 0)
            {
                printf("It is not possible to withdraw a negative amount. Please try again.");
            }

            else
            {
                currentBalances[currentAccount] -= withdrawAmount;
                printf("Amount %.2f withdrawn successfully.\n", withdrawAmount);
            }
            break;
        }

        case 3:
            printf("-------------------------------\n");
            printf("Current balance for account %d: %.2f\n", currentAccount + 1, currentBalances[currentAccount]);
            break;

        case 4:
        {
            printf("-------------------------------\n");
            printf("Your interest rate is: %.2f%%\n", interest);
            int years;
            printf("Enter the number of years: ");
            scanf("%d", &years);
            float futureBalance = currentBalances[currentAccount] * pow((1 + interestRate), years);
            printf("Future balance after %d years: %.2f\n", years, futureBalance);
            break;
        }

        case 5:
        {
            int accountNum;
            printf("-------------------------------\n");
            printf("Enter the account number to switch to (1-%d): ", numAccounts);
            scanf("%d", &accountNum);
            if (accountNum >= 1 && accountNum <= numAccounts)
            {
                currentAccount = accountNum - 1;                         // since the index is one below in C
                printf("Switched to account %d.\n", currentAccount + 1); // adding one to show which index we're on
            }
            else
            {
                printf("Invalid account number.\n");
            }
            break;
        }

        case 6:
            printf("-------------------------------\n");
            printf("All Balances:\n");
            for (int i = 0; i < numAccounts; i++)
            {
                printf("Account %d: %.2f\n", i + 1, currentBalances[i]);
            }
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
