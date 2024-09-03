#include <stdio.h>

void loan()
{
    printf("\n");
    printf("Choose the suitable loan for Yourself: \n");
    printf("\n");
    printf("1. Personal Loan\n");
    printf("\n");
    printf("2. Home Loan\n");
    printf("\n");
    printf("3. Education Loan\n");
    printf("\n");
    printf("4. Gold Loan\n");
    printf("\n");

    int user_input = printf("Enter the digit of which loan you want: ");
    scanf("%d", &user_input);

    if (user_input >= 1 && user_input <= 4)
    {
        int user_Aadhar = printf("Enter your Aadhar Number: ");
        scanf("%d", &user_Aadhar);

        int user_Pan = printf("Enter your Pan Number: ");
        scanf("%d", &user_Pan);

        int loan_time_period = printf("Enter the time period of loan: ");
        scanf("%d", &loan_time_period);

        printf("\n");
        printf("Your Loan has been Approved.\n");
        printf("\n");
        printf("If you dont pay your loan in %d years and 30 days,\n", loan_time_period);
        printf("\n");
        printf("then Interest will applied on your loan with 5%%, so pay wisely.\n");
        printf("\n");
        printf("Thankyou.\n");
        printf("\n");
    }
    else
    {
        printf("Invalid Input");
    }
}