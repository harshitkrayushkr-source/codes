#include <stdio.h>

int main()
{
    float fahren,centi,f,c;
    printf("enter temp in fahren\n");
    scanf("%f",&fahren);
    printf("enter temp in centi\n");
    scanf("%f",&centi);
    c=0.556*(fahren-32);
    f=(centi*1.8)+32;
    printf("converted value are %f c and %f f",c,f);
    return 0;
}