#include <stdio.h>
int main()
{
    char x;
    printf("enter any charcter :- ");
    scanf("%c",&x);
    if (x>='a' && x<='z'){
        printf("%c is a lowercase alphabet",x);
    }
    else if (x>='A' && x<='Z'){
        printf("%c is a uppercase alphabet",x);
    }
    else if (x>='0' && x<='9'){
        printf("%c is a digit",x);
    }
    else{
        printf("%c is a special character",x);
    }
    return 0;
}