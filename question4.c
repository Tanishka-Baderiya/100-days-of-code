#include <stdio.h>
int main()
{
    float r,x,y;
    printf("enter the radius of circle r :-");
    scanf("%f",&r);
    x=3.14*r*r;
    y=2*3.14*r;
    printf("area of circle is %f",x);
    printf("\n");
    printf("circumference of circle %f",y);
    return 0;
}