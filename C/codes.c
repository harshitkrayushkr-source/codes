#include <stdio.h>

int main()
{
    int sum=0,digit;
    printf("enter a 4 digit number\n");
    scanf("%d",&digit);
    sum=digit%10;
    digit/=10;
    sum+=digit%10;
    digit/=10;
    sum+=digit%10;
    digit/=10;
    sum+=digit;
    printf("sum of digits is %d",sum);
    return 0;
}