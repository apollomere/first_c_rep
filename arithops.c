/* Andre Johnson,
Week 2 Assignment: arithops.c
CS 111*/
#include <stdio.h>

int main()
{
    printf("+ For Addition\n- For Subtraction\n/ For Division\n * For Multiplication\n-->Enter two numbers, and your chosen operator:");
    int a;
    int b;
    char o;
    /*Above is the starting parameters*/
    scanf("%d", &a);//user-stored a value(First number input)
    scanf("%d", &b);//user-stored b value(Second number input)
    int divC = a / b;//Start:
    int multD = a * b;
    int subE = a - b;
    int addF = a + b;//End: This entire collumn is paired specifically with scanf
    scanf("%s", &o);//This is for the user to input the operator of their choosing
    if (o == '/') { //parameters for different options of operators up to the user to choose.
        printf("%d", divC);
    }
    else if(o == '*') {
        printf("%d", multD);
    }
    else if(o == '-') {
        printf("%d", subE);
    }
    else if(o == '+') {
        printf("%d", addF);
    }
    else {
        printf("That is not allowed!\n Please enter valid operator and try again.");// Restriction so if an unkown character symbol is chosen program informs user

    }
    
    return 0;
}