#include <stdio.h>
int main()
{
    float x,y;
    printf("enter the tempreture in celcius x :- ");
    scanf("%f",&x);
    y=(x*1.8)+32;
    printf("tempreture in fahrenheit is %f",y);
    return 0;
}