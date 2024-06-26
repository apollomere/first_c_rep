/*
Andre Johnson
Week 6
Assignment: HW_Week6
CS:111*/
#include <stdio.h>
int main()
{
    int a;
    int i = 6;
    printf("Enter a number between 2 and 5\n");
    scanf("%d", &a);
    
    switch(a){
        do{
            case 2 ... 5:
            printf("    |%d|",i);
            i+=a;
        }while(i <= 5000);
        break;
    default: printf("Incorrect input");
    }
    
return 0;
}