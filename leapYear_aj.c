/*Andre Johnson
Week 4 Quiz
Assignment: leapYear
CS111*/
#include <stdio.h>

int main()
{
    //Variables
    int year;

    printf("Please Enter Year:");
    scanf("%d", &year);
    if((year + 1)%4 == 0 && (year + 1)%100 != 0){
        printf("Next year is leap year");
    }
    else if((year + 1)%400 == 0 && (year + 1)%100 == 0){
        printf("Next year is leap year");
    }
    else{
        printf("Next year is NOT leap year");
    }
return 0;
}