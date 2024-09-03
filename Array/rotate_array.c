#include <stdio.h>

int main(){
    int arr[] = {1,2,3,5,4,8,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int i,j,key;

    for(i = 1;i<=k;i++){
        key = arr[0];
        j = 0;
        while(j<n-1){
            arr[j] = arr[j+1];
            j++;
        }
        arr[j] = key;
    }

    for(i = 0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}