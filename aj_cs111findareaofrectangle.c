#include <stdio.h>
//Find the area of a rectangle given the following arrays for the width and length of multiple
int main()
{
    int length[] = {31, 100, 28, 91, 177};
    int width[] = {10, 12, 166, 23, 67};
    int i = 0;
    int sz = sizeof(length)/sizeof(int);
    printf("%d\n", sz);
    for ( i = 0; i< sz; i++;){
        printf("Area:%d", length[i]*width[i]);
    }
    printf("Rectangle Length =%d\n Rectangle Width = %d\n Rectangle Area = %d", length, width, length[i]*width[i]);
}