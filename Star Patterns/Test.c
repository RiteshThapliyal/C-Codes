// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the Number: ");
//     scanf("%d", &num);

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", num - j + 1);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
    // int arr1[3][3];
//     int arr2[3][3];
//     int arr[3][3];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("Enter the Element at Index (%d, %d): ", i, j);
    //         scanf("%d", &arr1[i][j]);
    //     }
    //     // printf("\n");
    // }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Enter the Element at Index (%d, %d): ", i, j);
//             scanf("%d", &arr2[i][j]);
//         }
//         // printf("\n");
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             arr[i][j] = 0;
//             for (int k = 0; k < 3; k++)
//             {
//                 arr[i][j] += arr1[i][k] * arr2[k][j];
//             }
//         }
//         // printf("\n");
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr1[3][3];
//     int arr[3][3];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Enter the Element at Index (%d, %d): ", i, j);
//             scanf("%d", &arr1[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             arr[i][j] = arr1[j][i];
//         }
//     }

//     printf("Before Transpose\n");

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr1[i][j]);
//         }
//         printf("\n");
//     }

//     printf("After Transpose\n");

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int n,r=0, store=0;

//     printf("enter any number: ");
//     scanf("%d",&n);

//     store = n;
//      while(n>0)
//      {
//         r=r*10+n%10;
//         n=n/10;
//      }
     
//     printf("%d\n", r);
//     printf("%d\n", store);
//      if (r == store)
//      {
//         printf("Palindrome");
//      }
//      else
//      {
//         printf("Not Palindrome");
//      }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int array[] = {1,2,3,4,5,6,7,8,9};
//     int length = sizeof(array) / sizeof(array[0]);

//     int user_input;
//     printf("Enter the Element you want to find: ");
//     scanf("%d", &user_input);

//     int count = 0;

//     for (int i = 0; i < length; i++)
//     {
//         if (array[i] == user_input)
//         {
//             count ++;
//         }
//     }

//     if (count >= 1)
//     {
//         printf("fuck");
//     }
//     else
//     {
//         printf("chut chaiye");
//     }

//     return 0;
// }
#include <stdio.h>

int main()
{
    int arr[] = {5,1,8,4,3};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

