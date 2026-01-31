#include<stdio.h>
int main(){
    int arr[5];
    printf("enter elemnts of array: ");
    for (int i = 0; i <=4; i++)
    {
       scanf("%d",arr);
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("array is %d",arr[i]);
    }
    
    return 0;
}
