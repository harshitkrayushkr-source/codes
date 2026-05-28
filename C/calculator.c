
#include <stdio.h>

int main()
{
    float num2,num1;
    char ch;
    printf("enter command\n");
    scanf("%c",&ch);
    printf("enter number\n");
    scanf("%f%f",&num1,&num2);
    switch(ch)
    {
        case '+':
        printf("%f",num1+num2);
        break;

        case '-':
        printf("%f",num1-num2);
        break;

        case '*':
        printf("%f",num1*num2);
        break;

        case '/':
        printf("%f",num1/num2);
        break;

        default :
        printf("wrong input");
    }

    return 0;
}