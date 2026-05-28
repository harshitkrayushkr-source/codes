#include <stdio.h>

int main()
{
    int n,days=0,year;
    printf("enter year");
    printf("enter month");
    scanf("%d%d",&year,&n);
    for (int i=1;i<=n;i++){
    if (i==1)
    days+=31;
    else if(i==2){
        if(year%400==0){
        days+=29;
        }
        else if(year%4==0 && year%100!=0){
            days+=29;
        }
        else 
        days+=28;
    }
    else if(i==3)
    days+=31;
    else if(i==4)
    days+=30;
    else if(i==5)
    days+=31;
    else if(i==6)
    days+=30;
    else if(i==7)
    days+=31;
    else if (i==8)
    days+=31;
    else if(i==9)
    days+=30;
    else if(i==10)
    days+=31;
    else if(i==11)
    days+=30;
    else if(i==12)
    days+=31;
}
    printf("number of days is %d",days);
 
    return 0;
}