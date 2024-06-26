/*Andre Johnson
Week 3
Assignment: whichCentury_aj.c
CS 111*/
#include <stdio.h>
int main()
{   
    printf ("Please insert year:\n");
    float yearRange;
    int retainYear = (int)yearRange;
    scanf ("%f", &yearRange);
    if (yearRange/100 > retainYear / 100) {
        printf("%.0fth Century", yearRange / 100 );
    }
    else if( yearRange/100 == retainYear/100 ){
        printf("%.0ffth", (yearRange / 100) - 1);
        
    }
    return 0;
}