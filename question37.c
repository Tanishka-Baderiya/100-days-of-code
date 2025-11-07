//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int a,b,i,hcf,lcm;
    printf("Enter first number:- ");
    scanf("%d",&a);
    printf("Enter second number:- ");
    scanf("%d",&b);
    int main=(a<b)?a:b;
    for(i=1; i<=main; i++)
    {
        if (a%i==0 && b%i==0)
        hcf=i;
    }
    lcm=(a*b)/hcf;
    printf("LCM of %d and %d is %d",a,b,lcm);
    return 0;
}
