#include <stdio.h>

int main()
{
    float mm,cm=0,inch=0,feet=0;
    printf("enter distance in mm\n");
    scanf("%f",&mm);
    cm+=mm/10;
    inch+=cm/2.54;
    feet+=inch/12;
    printf("%f cm %f inch %f feet",cm,inch,feet);
    return 0;
}