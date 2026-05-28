#include <stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2;
    printf("enter points\n");
    scanf("(%f,%f)(%f,%f)",&x1,&y1,&x2,&y2);
    float distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("distance %f",distance);
    return 0;
}