#include "../include/customer.h"

int main()
{
    int l_choice=0;
    Customer c;
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
            int acc_number;
            int l_password;
            FILE *fp;
            fp = fopen("data/bank.dat", "rb");

            printf("Enter the Account Number : ");
            scanf("%d", &acc_number);

            if(fp == NULL)
            {
                printf("404 Server Error!!!\n");
                return 0;
            }

            while(fread(&c, sizeof(Customer), 1, fp))
            {
                if(c.account_num == acc_number)
                {
                    printf("Enter Password :");
                    scanf("%d", &l_password);

                    if(c.password == l_password)
                    {
                        user_console(acc_number);
                    }
                }
            }

            fclose(fp);
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
        else
        {
            break;
        }
    }
    return 0;
}