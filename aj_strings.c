/*
Andre Johnson
Assignment: Mid-Term
CS111
Question 6*/


#include<stdio.h>
#include<string.h>

int main()
{
char strings[6][130] = {"Midnight in Paris", "The Last Jedi",
                    "John Wick", "To Kill a mockingbird",
                    "All of us strangers", "Kilers of the Flower Moon"};
 for(int i = 0; i <= 6; i++){
    int characters = strlen(strings[i]);
    printf("%s:%d", strings[i], characters);
        //Complete the code 
    }
return 0;
}