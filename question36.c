//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
    int a,b,i,hcf;
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
    printf("The HCF of %d and %d is %d\n",a,b,hcf);
    return 0;
}