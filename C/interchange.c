#include <stdio.h>

int main()
{
    int a,b;
    printf("enter two numbers=\n");
    scanf("%d%d",&a,&b);
    a+=b;
    b=a-b;
    a-=b;
    printf("swapped numbers %d %d ",a,b);
    return 0;
}