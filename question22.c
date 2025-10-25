//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    float cp,sp,profit,loss,pp,lp;
    printf("enter cost price :- ");
    scanf("%f",&cp);
    printf("enter selling price :- ");
    scanf("%f",&sp);
    profit=sp-cp;
    pp=(profit/cp)*100;
    loss=cp-sp;
    lp=(loss/cp)*100;
    if(sp>cp){
        printf("profit , %f ",pp);
    }
    else if(cp>sp){
        printf("loss , %f",lp);
    }
    else{
        printf("no profit or loss");
    }
    return 0;
}