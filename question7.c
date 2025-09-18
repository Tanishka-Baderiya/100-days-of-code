#include <stdio.h>
int main()
{
    int x,y;
    printf("enter the number x :- ");
    scanf("%d",&x);
    printf("enter the number y :- ");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swap value of x is %d",x);
    printf("\n");
    printf("after swap value of y is %d",y);
    return 0;
}    