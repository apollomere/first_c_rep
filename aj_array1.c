#include<stdio.h>
//Declaration of Function
int addNumToArray();
//Function Implementation
int addNumToArray(int array[]){
    int i = 0;
    do{
        i = array[i];
        if(i % 12 == 0){
        
        i =+ array[i];
        printf("%d\n", array);
    }while(i < 500);
    }
}
int main()
{
    int array1[500] = {};
    addNumToArray(array1);

return 0;
}