#include <stdio.h>

int main()
{
    int num1,num2;
    printf("enter number to check \n");
    scanf("%d%d",&num1,&num2);
    if(num1%num2==0)
    printf("%d is multiple of %d\n",num1,num2);
    else if (num2%num1==0)
    printf("%d is multiple of %d",num2,num1);
    else 
    printf("wrong input");
    return 0;
}