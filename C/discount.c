#include <stdio.h>

int main()
{
    float price;
    float discount=0;
    printf("enter price\n");
    scanf("%f",&price);
    switch(price>=800?1:price>=500 && price<=800?2:3)
    {
        case 1 :
        discount=price*0.25;
        break;

        case 2 :
        discount=price*0.20;
        break;

        case 3 :
        discount;
        break;
    }
    printf("%f",discount);

    return 0;
}