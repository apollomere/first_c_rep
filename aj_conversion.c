#include <stdio.h>

//Declaration of Function

float store();
//Implementation of Function
float store(float array[]){
    float a;
    printf("Enter 12 Values");
    scanf("%f", &a);
    for(int i = 0; i<13; i++){
    a =+ array[i];
    }
    printf("%.2f", array);

}



int main()
{
    float array[] = {};
    store(array);
    
return 0;
}