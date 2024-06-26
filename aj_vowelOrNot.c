/*
Andre Johnson
Week 6
Assignment: HW_Week6
CS:111*/
#include<stdio.h>
#include <string.h>
//Function Declaration
int vowelExtraction();
//int totalvowels();
//Function Definition

int totalvowels(char array1[]){
    int charlength = strlen(array1); 
    int vowel_amount = 0;
        for (int i = 0; i < charlength; i++){
            char ch = array1[i];
            printf("%c\t", ch);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowel_amount++;
            }
    }
    printf("\nTotal Vowels:%d in:%s\n Without Vowels:", vowel_amount, array1);
    return vowel_amount;
}
int vowelExtraction(char array1[], char array2[]){
    int charlength = strlen(array1);//Stores as int based off of total characters in string
    for (int i = 0; i < charlength; i++){//loops until stirng length reached
        char ch = array1[i];//each index of the array is defined as a character assigned ch.
        array2[i] = ch;//Setting the emptylist to hold ch values of array1
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){//checks for exceptions in ch
            array2[i] =- ch;//Remove the ch values form array2
    }
    }
    printf(" %s", array2);//Not sure why it prints an extra y, really annoying spent hours trying to find why.
}
int main()
{
    char array1[] = {"The blue whale is out in the bay"};
    char array2[] = {""};//Empty list
    int size = sizeof(array1)/sizeof(array1);
    for (int i = 0; i<size; i++){
        int charlength = strlen(array1);
        int num = totalvowels(array1);
        vowelExtraction(array1, array2);
    }


return 0;
}