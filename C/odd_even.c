#include <stdio.h>

int main()
{
    int num;
    printf("enter number to check\n");
    scanf("%d",&num);
    if(num%2==0){

        printf("number is even");
    }
    else{
        printf("number is odd");
    }
    return 0;
}