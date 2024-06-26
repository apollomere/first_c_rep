/*Andre Johnson
Week 3
CS111*/
#include <stdio.h>

int main()
{
    int i;

    //int f1[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    //for loop, condition is tested at the beginning and incremented at the beginning.
    for (i = 5; i <= 17; i++ ){
        printf("%d\n", i);
    }
        printf("\n Loop end statement.\nYou've reached the end!");
    //while loop, condition is tested at the beginning
    while (i <= 17) {
        printf("%d\n", i);
        i++;
    }
    //do while loop, the condition is tested at the END, only run's once
    do{
        printf("Do while %d\n", i++);
    }while (i <=17);
    //CAREFUL, the do while loop ALWAYS executes once but the end condition must be correct.
    printf("End of count.");
    return 0;

}