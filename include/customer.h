#include <stdio.h>
#include <unistd.h>

typedef struct customer
{
    int account_num;
    char account_holder_name[100];
    float balance;
}Customer ;

void acc_balance(int acc_num);
void deposit(int acc_num);
void withdraw_money(int acc_num);
void acc_details(int acc_num);
void add_customer();