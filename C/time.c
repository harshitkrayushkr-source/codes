#include <stdio.h>

int main()
{
    int sec, hours=0,minutes=0;

    printf("enter time in second\n");

    scanf("%d",&sec);

    hours+=sec/3600;
    sec%=3600;
    minutes+=sec/60;
    sec%=60;
    printf("%d:%d:%d",hours,minutes,sec);
    return 0;
}