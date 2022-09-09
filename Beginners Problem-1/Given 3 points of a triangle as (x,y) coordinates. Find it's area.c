#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2,x3,y3;
    scanf("%f %f \n%f %f \n%f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    float a=sqrt((((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
    float b=sqrt((((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2))));
    float c=sqrt((((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1))));
    float d=(a+b+c)/2;
    printf("%.2f",sqrt(d*(d-a)*(d-b)*(d-c)));

    return 0;
}
