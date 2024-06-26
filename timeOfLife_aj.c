/*Andre Johnson
Week 4 Quiz
Assignment: timeOfLife
CS111*/
#include <stdio.h>

int main()
{
    //Variable
    int age;
    printf("Please Enter 5 Ages Between 5 and 100:");
for (int i=0; i<4; i++) { //Loop for the total inputs(0-4, including 0, means  5 total.)
    scanf("%d", &age);
    switch (age) {
        case 5 ... 10:
            printf("Elementary School\n");
            break;
        case 11 ... 18:
            printf("Too old for Halloween, too young to vote\n");
            break;
        case 19 ... 50:
            printf("Long way to retire\n");
            break;
        case 51 ... 64:
            printf("Finish line in sight!\n");
            break;
        case 65:
            printf("My time to relax\n");
            break;
        default:
            printf("Duh, invalid age");
    }
}
return 0;
}