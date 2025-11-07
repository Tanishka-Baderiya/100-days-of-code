//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
   int x,y,product,digit,hasOdd;
   printf("Enter a number:- ");
   scanf("%d",&x);
   
   product=1;
   while (x!=0)
   {
    digit=x%10;
    if (digit/2!=0){
        product=product*digit;
        x=x/10;
        hasOdd=1;
    }
   }
   if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");
   
   return 0;

}