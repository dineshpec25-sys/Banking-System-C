#include <stdio.h>

typedef struct customer
{
    int account_num;
    char account_holder_name[100];
    float balance;
};

void acc_balance();
void deposit();
void withdraw_money();
void acc_details();
void add_customer();