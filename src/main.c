#include "../include/customer.h"

int main()
{
    int choice=0;

    printf("******************* Welcome to DBI *******************\n");
    printf("Choose the choice from below:\n");
    printf("1. Check Balance\n");
    printf("2. Deposite Amount\n");
    printf("3. Withdraw Amount\n");
    printf("4. Account Details\n");
    printf("5. Add new Customer\n");
    printf("6. Exit\n");

    printf("Enter the choice :");
    scanf("%d", &choice);

    if(choice == 5)
    {
        add_customer();
        return 1;
    }

    int account_number = 0;
    printf("Enter the account number: ");
    scanf("%d", &account_number);

    switch (choice)
    {
    case 1:
        acc_balance(account_number);
        break;
    
    case 2:
        deposit(account_number);
        break;

    case 3:
        withdraw_money(account_number);
        break;

    case 4:
        acc_details(account_number);
        break;
    
    case 6:
        return 0;
    
    default:
        printf("Invalid Choice\n");
        break;
    }

    return 0;
}