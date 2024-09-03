#include <stdio.h>
#include <string.h>

void credit_card()
{
    printf("\n");
    int credit_score = printf("Enter Your Credit Score(Out of 10): ");
    scanf("%d", &credit_score);

    while (getchar() != '\n');

    if (credit_score > 7 && credit_score <= 10)
    {
        char user_name[50];
        char user_address[50];
        char user_employment_status[50];

        printf("Enter your Name: ");
        fgets(user_name, sizeof(user_name), stdin);

        user_name[strcspn(user_name, "\n")] = '\0';

        printf("Enter your Address: ");
        fgets(user_address, sizeof(user_address), stdin);

        user_address[strcspn(user_address, "\n")] = '\0';

        printf("Enter Employment Status: ");
        fgets(user_employment_status, sizeof(user_employment_status), stdin);

        user_employment_status[strcspn(user_employment_status, "\n")] = '\0';

        printf("\n");
        printf("Your Credit Card Process is Over, wait for the confirmation :- \n");
        printf("\n");
        printf("Successfully Created.\n");
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("You are not able to take our Bank Credit Card.\n");
    }
}