#include <stdio.h>
int main()
{   int a,b,c;
    printf("enter the value a :- ");
    scanf("%d",&a);
    printf("enter the value b :- ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swap value of a is %d",a);
    printf("\n");
    printf("after swap value of b is %d",b);
    return 0;
}