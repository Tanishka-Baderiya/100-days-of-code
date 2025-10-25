#include <stdio.h>
int main()
{
    int x;
    printf("enter the number of the day :- ");
    scanf("%d",&x);
    switch(x) {
        case 1 :
             printf("day is monday");
             break;
        case 2 :
             printf("day is tuesday");
             break;
        case 3:
             printf("day is wednesday");
             break;
        case 4 :
             printf("day is thursday");
             break;
        case 5 :
             printf("day is friday");
             break;
        case 6:
             printf("day is saturday");
             break;
        case 7:
             printf("day is sunday");
             break;
        default:
             printf("invalid input");
             break;
    }
    return 0;
}