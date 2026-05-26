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
void acc_balance(int account_number);
void deposit(int account_number);
void withdraw_money(int account_number);

// Admin Related Functions
void all_customer_details();
void customer_search_acc_num(int account_number);
void customer_search_customer_name(char *name);
void delete_customer();
void modify_cus_details();
void bank_balance();
