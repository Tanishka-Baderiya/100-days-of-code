//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    int x,y,z;
    char opreator;
    printf("enter 1st number :- ");
    scanf("%d",&x);
    printf("enter second number :- ");
    scanf("%d",&y);
    printf("enter opreator +,-,/,* :- ");
    scanf(" %c",&opreator);
    switch(opreator) {
    case '+' :
    z=x+y;
    printf("result is %d",z);
    break;
    case '-' :
    z=x-y;
    printf("result is %d",z);
    break;
    case '*' :
    z=x*y;
    printf("result is %d",z);
    break;
    case '/' :
    z=x/y;
    printf("result is %d",z);
    break;
    default :
    printf("invalid input");
    break;
    }
    return 0;
    
}