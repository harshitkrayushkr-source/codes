#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,r1=0,r2=0;
    printf("enter a b c\n");
    scanf("%d%d%d",&a,&b,&c);
    int D=pow(b,2)-4*a*c;
    if (D>0){
        r1=(-b+(sqrt(D)))/2*a;
        r2=(-b-(sqrt(D)))/2*a;
        printf("roots are %d and %d",r1,r2);
    }
    else if (D==0){
        r1=-b/2*a;
        printf("roots are equal and is equal to %d",r1);
    }
    else {
        printf("roots are imaginary");
    }

    return 0;
}