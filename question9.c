#include <stdio.h>
int main()
{
    float p,r,t,x;
    printf("enter principle value p :- ");
    scanf("%f",&p);
    printf("enter annual intrest rate r :- ");
    scanf("%f",&r);
    printf("enter time period in years t :- ");
    scanf("%f",&t);
    x=(float)(p*r*t)/100;
    printf("simple intrest is %f",x);
    return 0;
}