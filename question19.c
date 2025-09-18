#include <stdio.h>
int main()
{int x,y,z,a,b,c,p,q,r;
    printf("enter the value of 1st side of triangle x :- ");
    scanf("%d",&x);
    printf("enter the value of second side of triangle y :- ");
    scanf("%d",&y);
    printf("enter the value of third side of the triangle z :- ");
    scanf("%d",&z);
    if(x+y>z){
    printf("triangle is valid");}
    else if(y+z>x)
    {printf("triangle is valid");}
    else if(z+x>y)
    {printf("triangle is valid");}
    else{
    printf("triangle is not valid");}
    printf("\n");
    if(x==y && y==z){
    printf("triangle is equilateral");    
    }
    else if(x==y || y==z || z==x){
    printf("triangle is isosceles");    
    }
    else{
    printf("triangle is scalene");    
    }
    return 0;
}