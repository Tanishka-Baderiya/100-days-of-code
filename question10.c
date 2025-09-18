#include <stdio.h>
int main()
{
    int total_seconds;
    int hour,second,minutes;
    printf("enter time in seconds :- ");
    scanf("%d",&total_seconds);
    hour = total_seconds / 3600;           
    minutes = (total_seconds % 3600) / 60; 
    second = total_seconds % 60;
     printf("Time = %02d:%02d:%02d\n", hour, minutes, second);
    return 0;
}