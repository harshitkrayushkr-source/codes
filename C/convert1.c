#include <stdio.h>
#include <math.h>

int main()
{
    long long binary;
    int decimal=0,remainder;
    printf("enter\n");
    scanf("%lld",&binary);
    for(int i=0;binary!=0;i++)
    {
        remainder=binary%10;
        decimal+=remainder*pow(2,i);
        binary/=10;
    }
    printf("decimal\n%d",decimal);

    return 0;
}
