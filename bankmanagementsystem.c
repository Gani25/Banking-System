#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Global Variable
int ch1, balance, money, withdraw, balance, user = 0, ch2, mobileNo;
char name[50];

// Function Declaration
void createAccount();
void depositMoney();
void withdrawMoney();
void displayAccount();
void choice();
int main()
{
    choice();
    return 0;
}

void createAccount()
{
    printf("Enter your full name: ");
    getchar();
    gets(name);
    printf("Enter your mobile number:\n");
    scanf("%d", &mobileNo);
    printf("\nEnter amount to deposit \nMinimum = 1000\n");
    scanf("%d", &balance);
    user++;
    printf("\n~~~Congratulations your account has been created successfully~~~\n ");
    printf("Your total balance: %d\n", balance);
}

void depositMoney()
{
    if (user >= 1)
    {
        printf("\nEnter amount to deposit\n");
        scanf("%d", &money);
        balance = balance + money;
        printf("\n~~~Amount deposited successfully~~~\n");
        printf("Your total balance: %d\n", balance);
    }
    else
    {
        printf("\nAccount doesn't exist first create account\n~~~Thankyou~~~\n");
    }
}

void withdrawMoney()
{
    if (user >= 1)
    {
        printf("\nEnter amount to withdraw\n");
        scanf("%d", &withdraw);
        if (withdraw >= balance)
        {
            printf("\n~~~Insufficient Amount~~~\n");
        }
        else
        {
            balance = balance - withdraw;
            printf("\n~~~Amount debited successfully~~~\n");
            printf("Your total balance: %d\n", balance);
        }
    }
    else
    {
        printf("\nAccount doesn't exist first create account\n~~~Thankyou~~~\n");
    }
}

void displayAccount()
{
    if (user >= 1)
    {
        printf("\n~~~Acount Information~~~\n");
        printf("Your name: ");
        puts(name);
        printf("Your mobile number: ");
        printf("%d\n", mobileNo);
        printf("Your total balance: %d\n", balance);
    }
    else
    {
        printf("\nAccount doesn't exist first create account\n~~~Thankyou~~~\n");
    }
}

void choice()
{
    do
    {
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdray Money\n");
        printf("4. Display Information\n");
        printf("5. Exit\n");
        printf("~~~Select any number from above option~~~\n");
        scanf("%d", &ch1);
        switch (ch1)
        {
        case 1:
        {
            createAccount();
            break;
        }
        case 2:
        {
            depositMoney();
            break;
        }
        case 3:
        {
            withdrawMoney();
            break;
        }
        case 4:
        {
            displayAccount();
            break;
        }
        case 5:
        {
            printf("\n~~~Exiting~~~\n");
            exit(0);
            break;
        }
        default:
        {
            printf("\nSelect from above 5 option only\n~~~Try Again~~~\n");
            break;
        }
        }

        printf("Do you want to select next option? \nPress \n1 Continue\n");
        printf("2. Exit \n");
        scanf("%d", &ch2);

    } while (ch2 == 1);
}