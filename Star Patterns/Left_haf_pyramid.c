#include <stdio.h>

int main()
{
    int user_input = printf("Enter the length of the star: ");
    scanf("%d", &user_input);

for (int i = 1; i <= user_input; i ++){
    for (int j = 1; j <= user_input; j ++){
        if (j <= user_input - i){
            printf("  ");   // two space isliye kyuki gap mistake ho rha tha else part ka
        }else{
            printf("* ");  // ek space isliye kyuki stars me gap dena tha
        } 
    }
    printf("\n");
}
}
