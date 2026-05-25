#include "../include/customer.h"

int main()
{
    int l_choice=0;
    // Customer c;
    while(1)
    {
        printf("============================================\n");
        printf("            Welcome to DBI                  \n");
        printf("============================================\n");
    
        printf("    1. User Login\n");
        printf("    2. Create New Account\n");
        printf("    3. Admin Login\n");
        printf("    4. Exit\n");

        printf("Enter the option:");
        scanf("%d", &l_choice);

        if(l_choice == 1)
        {
            printf("User_login\n");
            user_console();
        }
        else if(l_choice == 2)
        {
            add_customer();
        }
        else if(l_choice == 3)
        {   
            printf("Admin_login\n");
            // admin_console();
        }
    }

    // while(1)
    // {
    //     printf("Enter the choice :");
    //     scanf("%d", &choice);

    //     if(choice == 5)
    //     {
    //         add_customer();
    //     }

    //     int account_number = 0;
    //     if(choice >= 1 && choice <= 4)
    //     {
    //         printf("Enter the account number: ");
    //         scanf("%d", &account_number);
    //     }

    //     switch (choice)
    //     {
    //     case 1:
    //         acc_balance(account_number);
    //         break;
    
    //     case 2:
    //         deposit(account_number);
    //         break;

    //     case 3:
    //         withdraw_money(account_number);
    //         break;

    //     case 4:
    //         acc_details(account_number);
    //         break;
    
    //     case 6:
    //         return 0;
    
    //     default:
    //         printf("Invalid Choice\n");
    //         break;
    //     }

    //     printf("\n");
    // }

    return 0;
}