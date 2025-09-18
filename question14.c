#include <stdio.h>
int main()
{
    char x;
    printf("enter any character :- ");
    scanf("%c",&x);
    if ((x=='a'|| x=='A') || (x=='e' || x=='E') || (x=='i' || x=='I') || (x=='o' || x=='O') || (x=='u' || x=='U')){
        printf("%c is vowel",x);
    } 
    else if ((x>='a'|| x>='A') && (x<='z' || x<='Z')){
        printf("%c is consonant",x);
    }
    else{
        printf("invalid input! please enter a valid character");
    }
    return 0;
}