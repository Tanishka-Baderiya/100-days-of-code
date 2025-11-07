//Write a program to find the sum of digits of a number
#include <stdio.h>
int main(){
    int x,sum,digit;
    printf("Enter a number:- ");
    scanf("%d",&x);
    printf("Sum of the digit of %d is:- ",x);
    sum=0;
    while (x!=0){
        digit=x%10;
        sum=sum+digit;
        x=x/10;
    }
    printf("%d",sum);
    return 0;
}
