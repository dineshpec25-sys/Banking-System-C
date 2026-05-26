#include "../include/customer.h"

void admin_console()
{
    int choice;

    while(1)
    {
        printf("============================================\n");
        printf("      Welcome to DBI - ADMIN PAGE           \n");
        printf("============================================\n");
        printf("    1. All Customer Details\n");
        printf("    2. Customer Search\n");
        printf("    3. Delete Customer\n");
        printf("    4. Modify Customer Details\n");
        printf("    5. Total Bank Balance\n");
        printf("    6. Logout\n");

        printf("Enter the choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                all_customer_details();
                break;
            
            case 2:
                {
                    int accountnumber, option;
                    char name[50];

                    printf("Option 1: Search by Account Number\n");
                    printf("Option 2: Search by User Name\n");

                    printf("Enter the Option : ");
                    scanf("%d", &option);

                    if(option == 1)
                    {
                        printf("Enter the Account Number : ");
                        scanf("%d", &accountnumber);

                        customer_search_acc_num(accountnumber);
                    }
                    else if(option == 2)
                    {
                        printf("Enter the Account Holder Name : ");
                        scanf("%s", name);

                        customer_search_customer_name(name);
                    }
                    else
                    {
                        printf("Invalid Option\n");
                    }

                    break;
                }

            case 3:
                delete_customer();
                break;

            case 4:
                modify_cus_details();
                break;

            case 5:
                bank_balance();
                break;
            
            case 6:
                return ;
                break;
            
            default :
                printf("Invalid Choice\n");
                break ;
            
        }
    }

    return ;
}
void all_customer_details()
{
    Customer c;

    FILE *fp;
    fp = fopen("data/bank.dat", "rb");

    if(fp == NULL)
    {
        printf("404 Server Error!!!\n");
        return ;
    }

    int count = 1;
    while(fread(&c, sizeof(Customer), 1, fp))
    {
        printf("Customer Number : %d\n", count++);
        printf("Account Number :      %d\n", c.account_num);
        printf("Account Holder Name : %s\n", c.account_holder_name);
        printf("Current Balance:      %.2f\n", c.balance);
        printf("\n");
    }

    fclose(fp);

    return ;
}

void customer_search_acc_num(int account_num)
{
    printf("Account Number\n");

    return ;
}

void customer_search_customer_name(char *use_name)
{
    printf("Customer Name\n");

    return ;
}

void delete_customer()
{
    printf("Delete Customer\n");

    return ;
}

void modify_cus_details()
{
    printf("Modify Customer Details\n");

    return ;
}

void bank_balance()
{
    printf("Bank Balance\n");

    return ;
}