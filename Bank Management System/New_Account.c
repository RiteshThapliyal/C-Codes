#include <stdio.h>
#include <string.h>

int Saving_amount;
int Current_amount;

void account_opening()
{
    printf("Enter 1 for 'Saving Account' & 2 for 'Current Account': ");
    int user_input;
    scanf("%d", &user_input);

    while (getchar() != '\n');

    if (user_input == 1)
    {
        char name[50];
        printf("Enter your Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';  

        char father_name[50];
        printf("Enter your Father Name: ");
        fgets(father_name, sizeof(father_name), stdin);
        father_name[strcspn(father_name, "\n")] = '\0';

        int pin_code;
        printf("Enter your Pin Code: ");
        scanf("%d", &pin_code);
        while (getchar() != '\n');  

        char address[50];
        printf("Enter your Address: ");
        fgets(address, sizeof(address), stdin);
        address[strcspn(address, "\n")] = '\0';

        int mobile_number;
        printf("Enter Mobile Number: ");
        scanf("%d", &mobile_number);
        while (getchar() != '\n');  

        int aadhar_number;
        printf("Enter Aadhar Number: ");
        scanf("%d", &aadhar_number);
        while (getchar() != '\n');  

        printf("Make an Initial Deposit (above 500 rupees): ");
        scanf("%d", &Saving_amount);
        while (getchar() != '\n');  

        if (Saving_amount < 500)
        {
            printf("We cannot proceed with your Account\n");
        }
        else
        {
            printf("\nCheck whether your Entered Details are Accurate or Not :-\n");
            printf("Name: %s\n", name);
            printf("Father Name: %s\n", father_name);
            printf("Pin Code: %d\n", pin_code);
            printf("Address: %s\n", address);
            printf("Mobile Number: %d\n", mobile_number);
            printf("Aadhar Number: %d\n", aadhar_number);
            printf("\n");

            printf("Press 1 for Correct details and 2 for Incorrect details: ");
            int check_user_details;
            scanf("%d", &check_user_details);
            while (getchar() != '\n');  

            if (check_user_details == 1)
            {
                printf("Your Account is Registered with given details in our Bank.\n");
                printf("Your Account is Credited with: %d rupees.\n", Saving_amount);
                printf("Thank you.\n");
            }
            else if (check_user_details == 2)
            {
                printf("Sorry for the Inconvenience, You have to Fill the Form Again.\n");
            }
            else
            {
                printf("Invalid Input.\n");
            }
        }
    }
    else if (user_input == 2)
    {
        char name[50];
        printf("Enter your Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';  

        char father_name[50];
        printf("Enter your Father Name: ");
        fgets(father_name, sizeof(father_name), stdin);
        father_name[strcspn(father_name, "\n")] = '\0';

        int pin_code;
        printf("Enter your Pin Code: ");
        scanf("%d", &pin_code);
        while (getchar() != '\n');  

        char address[50];
        printf("Enter your Address: ");
        fgets(address, sizeof(address), stdin);
        address[strcspn(address, "\n")] = '\0';

        int mobile_number;
        printf("Enter Mobile Number: ");
        scanf("%d", &mobile_number);
        while (getchar() != '\n');  

        int aadhar_number;
        printf("Enter Aadhar Number: ");
        scanf("%d", &aadhar_number);
        while (getchar() != '\n');

        printf("Make an Initial Deposit (no restrictions): ");
        scanf("%d", &Current_amount);
        while (getchar() != '\n');  

        printf("\nCheck whether your Entered Details are Accurate or Not :-\n");
        printf("Name: %s\n", name);
        printf("Father Name: %s\n", father_name);
        printf("Pin Code: %d\n", pin_code);
        printf("Address: %s\n", address);
        printf("Mobile Number: %d\n", mobile_number);
        printf("Aadhar Number: %d\n", aadhar_number);
        printf("\n");

        printf("Press 1 for Correct and 2 for Incorrect: ");
        int check_user_details;
        scanf("%d", &check_user_details);
        while (getchar() != '\n');  

        if (check_user_details == 1)
        {
            printf("Your Account is Registered with given details in our Bank.\n");
            printf("Your Account is Credited with: %d rupees.\n", Current_amount);
            printf("Thank you.\n");
        }
        else if (check_user_details == 2)
        {
            printf("Sorry for the Inconvenience, You have to Fill the Form Again.\n");
        }
        else
        {
            printf("Invalid Input.\n");
        }
    }
    else
    {
        printf("Invalid Input\n");
    }
}