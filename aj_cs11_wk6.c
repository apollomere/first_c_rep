#include <stdio.h>

int main()
{
    float arr1[] = {31.8, 14.79, 0, 4222, -9.56667, 515.8};
    //print out the arrays while loop and do-while loops
    int size = sizeof(arr1)/sizeof(float);
    printf("%d \n", size);

    printf("Print element 1 at index 0 %.2f \n", arr1[0]);

    for(int i = 0; i < size; i++ ) {
        printf("For loop Element at [%d] = %.2f \n", i, arr1[i]);
    }
    //Iterate using the while loop
    int i = 0;
    while (i < size){
        printf("While loop Element at [%d] = %.2f \n", i, arr1[i]);
        i++; //Reccomended to keep post increment and pre increments OUTSIDE the function.
    }

    //Do While Loop
    printf("index value = %d \n", i);
    i = 0;
    do{
        printf("Do while loop Element at [%d] = %.2f \n", i, arr1[i]);
        i ++;
    }while( i < size );
    return 0;

    //Friend used as a keyword for class arranged functions
}