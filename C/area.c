#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
        int area=(a+b+c)/2;
        printf("area of triangle is %d",area);
    }
    else 
    printf("invalid input");

    return 0;
}