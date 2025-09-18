#include <stdio.h>
int main()
{
    int x;
    printf("enter your percentage :- ");
    scanf("%d",&x);
    if (x>=0 && x<=100){
        if (x>=90 && x<=100){
        printf("Grade A");
    }
    else if (x>=80 && x<=89){
        printf("Grade B");
    }
    else if (x>=70 && x<=79){
        printf("Grade C");
    }
    else if(x>=60 && x<=69){
        printf("Grade D");
    }
    else {
        printf("Fail");
    }
    }
    else{
        printf("Invalid input! please enter valid percentage");
    }
    return 0;
}