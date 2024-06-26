/*Andre Johnson
Week 3
Assignment: admission_aj.c
CS 111*/
#include <stdio.h>
int main()
{   
int m_marks;
int p_marks;
int c_marks;

    printf("Enter the marks obtained in Math:");
        scanf("%d\n", &m_marks);

    printf("Enter the marks obtained in Physics:");
        scanf("%d\n", &p_marks);

    printf("Enter the marks obtained in Chemistry:");
        scanf("%d\n", &c_marks);
    if ( (m_marks + p_marks + c_marks) >= 180 || (m_marks + p_marks) >= 140) {
        printf("The candidate is eligible for admission*/");
    }
    else{
        printf("The candidate is ineligible for admission*/");
    }
    return 0;
}