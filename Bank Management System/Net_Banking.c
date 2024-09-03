#include <stdio.h>
#include <string.h>

void net_banking()
{
    int reference_No = 1234; // just for reference only.

    char user_name[50];
    printf("Enter Your Name: ");
    fgets(user_name, sizeof(user_name), stdin);
    user_name[strcspn(user_name, "\n")] = '\0'; 

    int user_Acc_No;
    printf("Enter Account Number: ");
    scanf("%d", &user_Acc_No);

    while (getchar() != '\n');

    printf("\n");

    if (reference_No == user_Acc_No)
    {
        char userName[50];
        printf("Enter Username: ");
        fgets(userName, sizeof(userName), stdin);
        userName[strcspn(userName, "\n")] = '\0';

        char password[50];  
        printf("Enter Password: ");
        fgets(password, sizeof(password), stdin);
        password[strcspn(password, "\n")] = '\0';

        printf("\n");

        printf("Now you are able to use Net Banking.\n");
        printf("\n");
        printf("Thank you.\n");
    }
    else
    {
        printf("Your account is not present in our Bank.\n");
    }
}