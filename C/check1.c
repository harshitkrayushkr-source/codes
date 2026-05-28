#include <stdio.h>

int main()
{
    char ch;
    printf("enter character to check\n");
    scanf("%c",&ch);
    if (ch>=48 && ch<=57)
    {
        printf("digit and ASCII number is %d",ch);
    }
    else if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    {
        printf("consonant and ASCII number is %d",ch);
    }

    return 0;
}