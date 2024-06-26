/* Andre Johnson,
Week 2 Assignment: grades.c
CS 111*/
#include <stdio.h>

int main()
{
    float grades;
    printf("Enter Marks:\n");//Opening Statement
    scanf("%f", &grades);//User Input
    if (0<= grades && grades <60) {
        printf("F");
    }
    else if (60 <= grades && grades <=70) {
        printf("D");
    }
    else if (70 <= grades && grades <=80) {
        printf("C");
    }
    else if (80 <= grades && grades <=90) {
        printf("B");
    }
    else if (90 <= grades && grades <=100) {
        printf("A");
    }
    else {

    }

    return 0;
}