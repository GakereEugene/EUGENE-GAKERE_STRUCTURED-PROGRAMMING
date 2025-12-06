#include <stdio.h>
#include <stdlib.h>

int login(int correctPIN);
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main()
{
    int correctPIN = 1234;
    float balance = 0.0;

    if (login(correctPIN)) {
        printf("ACCESS GRANTED.\n");
    } else {
        printf("Access Denied.\n");
        return 0;
    }

    int choice = 0;

    while (choice != 4){
        printf("...ATM MENU...\n");
        printf("1.  Balance Enquiry.\n");
        printf("2. Deposit.\n");
        printf("3. Withdraw.\n");
        printf("4. Exit.\n");
        printf("Enter Your Choice please: ");
        scanf("%d", &choice );

     switch (choice) {
     case 1:
        checkBalance(balance);
        break;

     case 2:
        balance = deposit(balance);
        break;

     case 3:
         balance = withdraw(balance);
         break;

     case 4:
        printf("Exit. Thank You.\n");
        break;

     default:
        printf("Invalid Choice Please Try Again.\n");

     }

    }
    return 0;

}
    int login(int correctPIN) {
        int userPIN;
        int attempts = 0;

        while (attempts < 3) {
            printf("Enter Your PIN Please:");
            scanf("%d", &userPIN);

        if(userPIN == correctPIN) {
            return 1;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
        }
        }

        return 0;
    }

    void checkBalance(float balance){
        printf("Your Current balance is: Ksh %.2f\n");
    }

    float deposit(float balance){
        float amount;
        printf("Enter Amount to Deposit");
        scanf("%f", &amount);

        if (amount > 0) {
            balance += amount;
            printf("Deposit Successful. New Balance: Ksh %.2f\n", balance);
        } else{
            printf("Invalid Amount.\n");
        }

        return balance;
    }

    float withdraw(float balance) {
        float amount;
        printf("Enter amount to Withdraw:");
        scanf("%f", &amount);

        if (amount <= 0) {
            printf("Invalid Withdraw amount.\n");
        } else if (amount > balance) {
            printf("Insufficient Funds in Account.\n");
        } else {
            balance -= amount;
            printf("Withdrawal Successful. New Account Balance: Ksh %2f\n", balance);
        }

        return balance;
    }
