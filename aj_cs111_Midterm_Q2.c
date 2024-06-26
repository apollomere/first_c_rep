/*
Andre Johnson
Assignment: Mid-Term
CS111
Question 2*/
#include <stdio.h>
//Delcaration of Function
int positiveDifference();
//Implementation of Function
int positiveDifference(int a, int b){
    int greater = a;
    int smaller = b;
    if(b > a || a < b){//Tried to make it to where the user could enter 15 or 20 in any order, but won't work.
        b = greater;
        a = smaller;
    }
        int difference = (greater - smaller);
            if(difference >= 0){
                printf("Number one:%d Number two:%d\n Difference:%d", a, b, difference);
                return difference;
            }else
            return 0;    
            {
    }
}

int main()
{
int y;
int x;
    printf("Please Enter Two Numbers to Subtract\n");
    scanf("%d", &y);
    scanf("%d", &x);
    positiveDifference(y,x);
    


return 0;
}