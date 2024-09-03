#include <stdio.h>
#include <string.h>
void welcome(){
    printf("************** Welcome to IIMT BANK **************\n");
    printf("How Can I Help You?\n");
    printf("Please Select the option:-\n");
    printf("1. Opening New Bank Account\n");
    printf("2. Existing Account\n");
    printf("3. Credit Card\n");
    printf("4. Net Banking\n");
    printf("5. Loan\n");
    printf("6. Exit\n\n");
}
void account_opening(){

}
// .Current balance 
//   .Withdrawal
//   .Deposit
//   .Print passbok
void further_proceed(){
    printf("====> Select the further procedure:\n");
    printf("1. Check Current Balance\n2. Withdrawal\n3. Deposit\n4. Print PassBook");
    
}
void existing_account(){
    
    char nm[] = "RONIT";
    long int acc = 6543;
    int th = 51230303;
    char ifsc[] = "SBINO12345";

    char name[50];
    long int accn_number;
    int thumb;
    char ifsc_code[10];
    printf("Enter Your Name: ");
    scanf("%s", name);
    printf("Enter the Account Number: ");
    scanf("%ld", &accn_number);
    printf("Enter IFSC Code: ");
    scanf("%s", ifsc_code);
    printf("Enter the thumb: ");
    scanf("%d", &thumb);

    if((strcmp(name,nm) == 0) && (accn_number == acc) && (thumb == th)){
        further_proceed();
    }

    if ((strcmp(ifsc,ifsc_code) == 0))
    {
        
    }
    
    else{
        printf("Sorry you don’t have registered account");
        // opening_account();
    }

    
}
int main(){
    int opt;
    welcome();
    printf("Choose the above option for further procedure: ");
    scanf("%d", &opt);
    // if(opt == 2){
    //     existing_account();
    // }
    // switch (opt)
    // {
    // case 1:
    //     account_opening();
    //     break;
    // case 2:
    //     existing_account();
    //     break;
    // default:
    //     printf("You selected wrong option");
    // // printf("You chooses %d\n", opt);
    // switch (opt)
    // {
    // case 1:
    //     account_opening();
    //     break;
    // case 2:
    //     existing_account();
    //     break;
    // default:
    //     printf("You selected wrong option");
    // // printf("You chooses %d\n", opt);
    switch (opt)
    {
    case 1:
        account_opening();
        break;
    case 2:
        existing_account();
        break;
    default:
        printf("You selected wrong option");
    // printf("You chooses %d\n", opt);
    }
    return 0;
}