#include <stdio.h>
int main()
{
    int x;
    printf("enter a number :- ");
    scanf("%d",&x);
    if (x>=0){
        if (x==0){
            printf("zero");
        }
        else{
            printf("positive");
        }
    }
    else{
        printf("negative");
    }
    return 0;
}