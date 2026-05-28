#include <stdio.h>
#include <math.h>

int main()
{
    int num,rev=0,rem;
    printf("enter\n");
    scanf("%d",&num);
    for(int i=0;num!=0;i++)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("%d",rev);

    return 0;
}