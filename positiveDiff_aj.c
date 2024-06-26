/*Andre Johnson
Week 3
Assignment: positiveDiff_aj.c
CS 111*/
#include <stdio.h>
int main()
{   
   float a;
   float b;
   printf("Enter two values, one at a time:\n");
   scanf("%f%f", &a, &b);
   if (b - a < 0 || a - b >= 0) {
    printf("%.02f", a - b);
   }
   else if(a - b <0 || b - a>= 0) {
    printf("%.02f", b - a);
   }
    return 0;
}