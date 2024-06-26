/*Andre Johnson
Week 4 Quiz
Assignment: waterbill
CS111*/
#include <stdio.h>

int main()
{   //Variables
    int water_usage = 27;
    float rate = 1;

    switch(water_usage) {
        case 1 ... 22:
            printf("Water Usage: %d, Rate: %.2f Total Bill: $%.2f", water_usage, rate * 2, (water_usage * (rate * 2)));
            break;
        case 23 ... 68:
            printf("Water Usage: %d, Rate: %.2f, Total Bill: $%.2f", water_usage, rate * 3.45, (water_usage * (rate * 3.45)));
            break;
        case 69 ... 100000://Not sure how to make the limit infinite(I tried symbols, but, format problem)
            printf("Water Usage: %d, Rate: %.2f, Total Bill: $%.2f", water_usage, rate * 5.75, (water_usage * (rate * 5.74)));
            break;
    return 0;
    }
}