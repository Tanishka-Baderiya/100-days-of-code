#include <stdio.h>
int main()
{
    int x,y,z,a;
    printf("enter length x :- ");
    scanf("%d",&x);
    printf("enter breadth y :- ");
    scanf("%d",&y);
    z=x*y;
    printf("area of rectangle is %d",z);
    a=2*(x+y);
    printf("\n");
    printf("perimeter of the rectangle is %d",a);
    return 0;
}