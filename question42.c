//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main()
{
    int i,x,digit;
    digit=0;
    printf("Enter a number you want to check if is a perfect number or not:- ");
    scanf("%d",&x);
    for (i=1; i<=x/2; i++)
    {
        if(x%i==0) {
            digit=digit+i;
        }
    }
    if (digit==x) {
        printf("%d is a perfect number",x);
    }
    else {
        printf("%d is not a perfect number",x);
    }
    return 0;
}