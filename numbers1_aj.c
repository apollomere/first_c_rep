/*Andre Johnson
Week 4 Quiz
Assignment: numbers1
CS111*/
#include <stdio.h>

int main()
{
    //Variables
    int a = 6000;
        int b = 7505;
        int remainderb = b%3;
    int c = 7503;
        int d = 9031;
        int remainderd = d%3;
    printf("Divisible by 3: %d, %d\n", a, c);
    printf("Remainders- For %d:%d , For %d:%d ",b, remainderb, d, remainderd);
return 0;
}