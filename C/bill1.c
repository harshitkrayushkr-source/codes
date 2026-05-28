#include <stdio.h>

int main()
{
    int calls;
    float bill;
    printf("enter calls\n");
    scanf("%d",&calls);
    switch(calls<=100?1:calls<=150?2:calls<=200?3:4)
    {
        case 1:
        bill=200;
        break;

        case 2:
        bill=200+(calls-100)*0.6;
        break;

        case 3:
        bill=200+(50*0.6)+(calls-150)*0.5;
        break;

        case 4:
        bill=200+(50*0.6)+(50*0.5)+(calls-200)*0.4;
        break;

        default:
        bill=200;
    }
    printf("bills=%f",bill);
    
    return 0;
}