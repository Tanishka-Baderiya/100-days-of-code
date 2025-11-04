//Write a program to check if a number is a palindrome
#include <stdio.h>
int main()
{
    int x;
    printf("enter a number you want to check if palindrome or not :- ");
    scanf("%d",&x);
    int rev,rem,orignal;
    rev=0;
    orignal=x;
    while(x!=0){
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    if (orignal==rev)
        printf("entered number is palindrome");
    else
        printf("entered number is not palindrome");

    return 0;
    
}