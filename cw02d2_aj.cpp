/*Andre Johnson
Week 3
CS111*/
#include <stdio.h>

int main()
{
    int marks;

    //printf("Enter Marks:");
    //scanf("%d", &marks);
    marks = 58;
    //float f1[5]; {0, 1, 2 ,3 ,4 ,5}
    int gradeArray[] = {0, 59, 60, 70, 79, 80, 89, 90, 100, -16, 133};

    int szOfArray = sizeof(gradeArray)/sizeof(int);
    
    for (int i = 0; i < szOfArray; i++){
        printf("Value of Index %d = %d \n", i, gradeArray[i] );
        marks = gradeArray[i];
        switch(marks) {
     case 0 ... 60: 
			printf("fail\n");
            break;
     case 70 ... 79: 
			printf("C\n"); 
			break;
     case 80 ... 89: 
			printf("B\n"); 
			break;
	  case 90 ... 100:
			printf("A\n"); 
			break;
     default: 
			printf("No grade\n"); 
   }
    //printf("Size of array %d \n", szOfArray);
    //for (int i = 0; i <)
    return 0;
        }
}
/*

array is alwayas consecutive or contiguous/touching
Arrays can hold user-defioned data types, in C++ and JAVA, you can have arrays with
different data types collections*/

