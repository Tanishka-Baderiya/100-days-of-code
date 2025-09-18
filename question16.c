#include <stdio.h>
int main()
{
    int x,y,z;
    printf("enter 1st number :- ");
    scanf("%d",&x);
    printf("enter 2nd number :- ");
    scanf("%d",&y);
    printf("enter 3rd number :- ");
    scanf("%d",&z);
    if (x>y && x>z){
        printf("%d is greatest",x);
    }
    else if (y>z){
        printf("%d is greatest",y);
    }
    else{
        printf("%d is greatest",z);
    }
    return 0;
}