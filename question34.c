//Write a program to check if a number is prime.
#include <stdio.h>
int main()
{
    int i,x;
    printf("enter the number you want to check if prime or not :- ");
    scanf("%d",&x);
    if(i<=1){
        printf("%d is not a prime",x);
    }
    if(x==2){
        printf("%d is a prime number",x);
    }
    for(i=2 ; i<=x /2 ; i++){
        if(x%i==0){
            printf("%d is not a prime",x);
            break;
        }
        else{
            printf("%d is a prime",x);
            break;
        }
    }    
    return 0;
}