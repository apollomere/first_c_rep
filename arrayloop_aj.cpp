/*Andre Johnson
Week 3
CS111*/

#include <stdio.h>

int main()
{
    int i = 0;
    int container [4] = {5, 6, 7, 9};

    //Print array with while loop and do while loop

    while (i < 4) { 
        printf("%d\n",container[i]);
        i++;
    }
        printf("End  while Loop\n");\
    do {
        printf("%d", container[i], i++ );
        
    }while(i < 4);
    //Quiz on wednesday next week, 
    return 0;
}