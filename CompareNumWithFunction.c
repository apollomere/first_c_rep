/* Functions and arrays*/


#include <stdio.h>

//Function declaration here - it returns the smaller of 2 numbers
int getSmallerNumber(int num1, int num2);

//Define or Implement that function here
int getSmallerNumber(int num1, int num2){
    int smaller = num1;
    if (num1 > num2){
        smaller = num2;
    }
    return smaller;
    
}

int main(){

	 int number1[] = {100, 35, 20, 1556, 17, 8};
	 int number2[] = {218, 435, 5, 100, 125, 2};
     int size = sizeof(number1)/sizeof(int);
     
     for (int i = 0; i < size; i++ ){
         int less = getSmallerNumber(number1[i], number2[i]);
         printf("Smaller of 2 numbers %d, %d = %d \n", number1[i], number2[i], less);
     }
}