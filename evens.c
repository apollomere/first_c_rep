/* Andre Johnson,
Week 2 Assignment: evens.c
CS 111*/
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d", &a);
    int evenA = a%2;
    if (evenA == 0){
      printf("Even\n");
      }
      else{
        printf("Odd\n");
      }
      return 0;
}