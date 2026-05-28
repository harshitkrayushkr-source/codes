#include <stdio.h>

int main()
{
    int n,prime=1;
    printf("enter\n");
    scanf("%d",&n);
    if(n<=1)
    prime=0;
    else
    {
        for(int i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
                prime=0;
                break;
            }
        }
    }
    if(prime)
    printf("yes");
    else
    printf("no");

    return 0;
}