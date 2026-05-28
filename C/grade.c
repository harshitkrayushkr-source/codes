#include <stdio.h>

int main()
{
    int quizScore;
    printf("enter qiuz score\n");
    scanf("%d",&quizScore);
    if (quizScore<=10 && quizScore>=9)
    printf("A");
    else if(quizScore<=8 && quizScore>=7)
    printf("B");
    else if(quizScore<=6 && quizScore>=5)
    printf("C");
    else if(quizScore<=4 && quizScore>=3)
    printf("D");
    else if(quizScore<3)
    printf("F");
    else 
    printf("wrong input");    
    return 0;
}