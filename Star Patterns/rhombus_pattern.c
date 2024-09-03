#include <stdio.h>
int main()
{
  int n = printf("Enter a Number: ");
  scanf("%d", &n);
  
  for (int i = 1; i <= n; i ++){
    for (int j = 1; j < 2 * n; j ++){
      if (j <= i - 1 || j >= n + i){
        printf(" ");
      }else{
        printf("*");
      }
    }
    printf("\n");
  }
}