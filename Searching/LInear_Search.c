#include <stdio.h>

int main()
{
    int arr[] = {4, 10, 15, 2, 6, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    int user_input = printf("Enter the Element: ");
    scanf("%d", &user_input);
    int found = 0;

    for (int i = 0; i < length; i++)
    {
        if (user_input == arr[i])
        {
            found ++;
            break;
        }
    }
    if (found == 1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }

    return 0;
}