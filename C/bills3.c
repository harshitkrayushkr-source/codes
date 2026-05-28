#include <stdio.h>

int main()
{
    int unit;
    float bill;
    printf("enter calls\n");
    scanf("%d",&unit);
    switch(unit<=100?1:unit<=200?2:unit<=400?3:4)
    {
        case 1:
        bill=0;
        break;

        case 2:
        bill=(unit-100)*1.5;
        break;

        case 3:
        bill=(100*1.5)+(unit-200)*2.5;
        break;

        case 4:
        bill=(100*0.9)+(200*2.5)+(unit-400)*3.5;
        break;
    }
    printf("%f",bill);

    return 0;
}