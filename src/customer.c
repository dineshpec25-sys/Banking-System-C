#include "../include/customer.h"

void add_customer()
{
    Customer c;
    int password, re_password;

    FILE *fp;
    fp = fopen("data/bank.dat", "ab");

    if(fp == NULL)
    {
        printf("File Creation Failed\n");
        return ;
    }

    printf("Enter the Account holder Name :");
    scanf("%s", c.account_holder_name);

    printf("Enter the Account number :");
    scanf("%d", &c.account_num);

    printf("Enter a New Password:");
    scanf("%d", &password);

    printf("Retype Password:");
    scanf("%d", &re_password);

    if(password == re_password)
    {
        c.password = password;
    }
    else{
        printf("Password doesn't match!!!");
    }

    printf("Enter the Amount of First Deposit :");
    scanf("%f", &c.balance);

    fwrite(&c, sizeof(Customer), 1, fp);

    printf("Loading");
    for(int i = 0; i < 3; i++)
    {
        printf(".");
        fflush(stdout);
        usleep(300000);
    }
    printf("\n");

    printf("Account created succesfully!!!\n");

    fclose(fp);

}

void acc_balance(int account_number)
{
    Customer c;

    FILE *fp;
    fp = fopen("data/bank.dat", "rb");
    
    if(fp == NULL)
    {
        printf("File Creation Failed\n");
        return ;
    }

    while(fread(&c, sizeof(Customer), 1, fp))
    {
        if(c.account_num == account_number)
        {
            printf("Loading");
            for(int i = 0; i < 3; i++)
            {
                printf(".");
                fflush(stdout);
                usleep(300000);
            }
            printf("\n");

            printf("Account Found\n");
            printf("Balance : %.2f\n", c.balance);

            fclose(fp);
            return ;
        }
    }
}

void deposit(int account_number)
{
    float amount = 0;
    
    Customer c;

    FILE *fp;
    fp = fopen("data/bank.dat", "rb+");
    
    if(fp == NULL)
    {
        printf("File Creation Failed\n");
        return ;
    }

    while(fread(&c, sizeof(Customer), 1, fp))
    {
        if(c.account_num == account_number)
        {
            printf("Loading");
            for(int i = 0; i < 3; i++)
            {
                printf(".");
                fflush(stdout);
                usleep(300000);
            }
            printf("\n");

            printf("Account Found\n");
            printf("Enter the Amount to Deposit : ");
            scanf("%f", &amount);

            c.balance = c.balance + amount;

            fseek(fp, -sizeof(Customer), SEEK_CUR);
            fwrite(&c, sizeof(Customer), 1, fp);

            fclose(fp);
            return ;
        }
    }
}

void withdraw_money(int account_number)
{
    float amount = 0;
    
    Customer c;

    FILE *fp;
    fp = fopen("data/bank.dat", "rb+");
    
    if(fp == NULL)
    {
        printf("File Creation Failed\n");
        return ;
    }

    while(fread(&c, sizeof(Customer), 1, fp))
    {
        if(c.account_num == account_number)
        {
            printf("Loading");
            for(int i = 0; i < 3; i++)
            {
                printf(".");
                fflush(stdout);
                usleep(300000);
            }
            printf("\n");

            printf("Account Found\n");
            printf("Enter the Amount to Withdraw : ");
            scanf("%f", &amount);

            c.balance = c.balance - amount;

            fseek(fp, -sizeof(Customer), SEEK_CUR);
            fwrite(&c, sizeof(Customer), 1, fp);
            
            fclose(fp);
            return ;
        }
    }
}

void acc_details(int account_number)
{
    
    Customer c;

    FILE *fp;
    fp = fopen("data/bank.dat", "rb");
    
    if(fp == NULL)
    {
        printf("File Creation Failed\n");
        return ;
    }

    while(fread(&c, sizeof(Customer), 1, fp))
    {
        if(c.account_num == account_number)
        {
            printf("Loading");
            for(int i = 0; i < 3; i++)
            {
                printf(".");
                fflush(stdout);
                usleep(300000);
            }
            printf("\n");

            printf("Account Found\n");
            printf("Account Holder Name : %s\n", c.account_holder_name);
            printf("Account NUmber: %d\n", c.account_num);
            printf("Balance : %.2f\n", c.balance);
            
            fclose(fp);
            return ;
        }
    }
}