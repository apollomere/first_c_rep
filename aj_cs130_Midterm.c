#include <stdio.h>
#include <string.h>
//Function Declaration
//char getCharacter();
//Function Implementation
/*char getCharacter(){
    char ch;
    scanf("%c", &ch);
}*/
int main()
{
   /* float *fPtr;
    float rVal = 212.99;
    fPtr = &rVal;
    printf("rVal:%.2f, Pointer is:%p",rVal, fPtr);*/
    char many[] = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int tally = strlen(many);
    printf("Total Characters:%d", tally);

}