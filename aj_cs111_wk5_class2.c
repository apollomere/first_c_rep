#define M_PI 3.14159265358979323846
#include <stdio.h>
float calculateAreaUsingPow(float r){

    float area = M_PI * pow(r,2);
    print("In fn: %.2f\n", area);
    return area;

}



/*
Arrays: Contiguous, the pointer within thememory location gos immediately ot the next stored value defined within the array,
thus having improved processing power/speed compared to not having the array, and instead having
multiple defined variables.

Functions can only return one value:Why void functions exist.

HW: SOMETHING WHICH USES ARRAYS AND FUNCTIONS(MAKE YOUR OWN FUNCTIONS)*/