#include <stdio.h>
#include "New_Account.c"
#include "Existing_Account.c"
#include "Credit_Card.c"
#include "Net_Banking.c"
#include "Loan.c"

void welcome(){
    printf("\n");
    printf("************** Welcome to IIMT BANK **************\n");
    printf("\n");
    printf("How Can I Help You?\n");
    printf("\n");
    printf("Please Select the option:-\n");
    printf("\n");
    printf("1. Opening New Bank Account\n");
    printf("\n");
    printf("2. Existing Account\n");
    printf("\n");
    printf("3. Credit Card\n");
    printf("\n");
    printf("4. Net Banking\n");
    printf("\n");
    printf("5. Loan\n");
    printf("\n");
    printf("6. Exit\n\n");
    printf("\n");
}

int main(){
    int opt;
    welcome();
    printf("Choose the above option for further procedure: ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        account_opening();
        break;
    case 2:
        Existing_Account();
        break;
    case 3:
        credit_card();
        break;
    case 4:
        net_banking();
        break;
    case 5:
        loan();
        break;
    case 6:
        printf("Thankyou For Visiting.\n");
        break;
    
    default:
        printf("Entered Input is Invalid.\n");
        break;
    }
    return 0;
}