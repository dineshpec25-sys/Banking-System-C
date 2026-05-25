#include <stdio.h>
#include <unistd.h>

typedef struct customer
{
    int account_num;
    char account_holder_name[100];
    int password;
    float balance;
}Customer ;

// Primary Functions
void add_customer();
void admin_console();   
void user_console(int account_number);

// User Related Functions
void acc_balance(int acc_num);
void deposit(int acc_num);
void withdraw_money(int acc_num);

// Admin Related Functions
