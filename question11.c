#include <stdio.h>
int main()
{
    int x,y;
    printf("enter a number :- ");
    scanf("%d",&x);
    y=x%2;
    if (y==0){
        printf("%d is an even number",x);
    }
    else{
        printf("%d is a odd number",x);
    }
    return 0;
}