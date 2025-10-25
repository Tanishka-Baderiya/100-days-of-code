//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main(){
    int x;
    printf("enter the number of month :- ");
    scanf("%d",&x);
    switch(x) {
        case 1:
        printf("january , 31 days");
        break;
        case 2:
        printf("feburary , 28 days");
        break;
        case 3:
        printf("march , 31 days");
        break;
        case 4:
        printf("april , 30 days");
        break;
        case 5:
        printf("may ,  31 days");
        break;
        case 6:
        printf("june , 30 days");
        break;
        case 7:
        printf("july , 31 days");
        break;
        case 8:
        printf("august , 31 days");
        break;
        case 9:
        printf("september , 30 days");
        break;
        case 10:
        printf("october , 31 days");
        break;
        case 11:
        printf("november , 30 days");
        break;
        case 12:
        printf("december , 31 days");
        break;
        defualt:
        printf("invalid input");
        break;

    }
    return 0;
}