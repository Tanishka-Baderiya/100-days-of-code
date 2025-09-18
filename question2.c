#include <stdio.h>
int main()
{
    int x,y,z,a,b;
    float c;
    printf("enter the number x :-");
    scanf("%d",&x);
    printf("enter the number y :-");
    scanf("%d",&y);
    z=x+y;
    a=x-y;
    b=x*y;
    c=x/y;
    printf("sum is %d",z);
    printf("\n");
    printf("substraction is %d",a);
    printf("\n");
    printf("multiplication is %d",b);
    printf("\n");
    printf("quotient is %f",c);
    return 0;
}
