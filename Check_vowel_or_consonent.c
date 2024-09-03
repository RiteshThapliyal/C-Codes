#include <stdio.h>
#include <ctype.h>

int main()
{
    char user_input = printf("Enter a Character: ");
    scanf("%c", &user_input);

    if (tolower(user_input) == 'a' || tolower(user_input) == 'e' || tolower(user_input) == 'i' || tolower(user_input) == 'o' || tolower(user_input) == 'u')
    {
        printf("Entered Character is Vowel\n");
    }
    else
    {
        printf("Entered Character is Consonent\n");
    }
}