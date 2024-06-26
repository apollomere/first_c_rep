/*Andre Johnson
Week 3
Assignment: whichQuarter_aj.c
CS 111*/

#include <stdio.h>
int main()
{
    
    printf("Enter Month for the Quarter:");
    int yearRange = (1,2,3,4,5,6,7,8,9,10,11,12);
    scanf("%d\n", &yearRange);
    
    switch(yearRange){
        case 1 ... 2:
            printf("First Quarter\n");
        break;
        case 3 ... 6:
            printf("Second Quarter\n");
        break;
        case 7 ... 10:
            printf("Third Quarter");
        break;
        case 11 ... 12:
            printf("Fourth Quarter");
        default:
        printf("Pleae enter a valid month between 1-12");
    }
    return 0;
}