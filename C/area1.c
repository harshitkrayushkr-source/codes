#include <stdio.h>

int main()
{
    float l,b,area;
    char ch;
    printf("enter choice\n");
    scanf("%s",&ch);
    printf("enter dimensions of the shape\n");
    scanf("%f%f",&l,&b);
    switch(ch)
    {
        case 'c':
        area=3.14*l*l;
        printf("area of circle is %f",area);
        break;

        case 'r':
        area=l*b;
        printf("area of rectangle is %f",area);
        break;

        case 't':
        area= 0.5*l*b;
        printf("area of triangle is %f",area);
        break;

        default:
        printf("wrong input");
    }

    return 0;
}