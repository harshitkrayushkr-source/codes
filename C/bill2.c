#include <stdio.h>

int main()
{
    int calls;
    float bill;
    printf("enter calls\n");
    scanf("%d",&calls);
    switch(calls>=1 && calls<=150?1:calls>=150 && calls<=250?2:calls>=251 && calls<=400?3:4)
    {
        case 1:
        bill=0;
        break;

        case 2:
        bill=(calls-150)*0.9;
        break;

        case 3:
        bill=(100*0.9)+(calls-250)*1.2;
        break;

        case 4:
        bill=(100*0.9)+(150*1.2)+(calls-400)*1.5;
        break;
    }
    printf("%f",bill);

    return 0;
}