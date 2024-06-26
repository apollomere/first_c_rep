//Make a game which the user inputs a number and that number is associated with a certain fruits.

#include <stdio.h>
int main()
{
    int i=0;
    int range[] = {0,10,20,30,40,50,60,70,80,90,100};
    int var;

/*for( i=0; i<11; i++) {
    printf("%d\n", range[i]);
}
*/
/*do {
    printf("%d\n", range[i], i++);

}while(i<6);
printf("End of series\n");*/
/*while(i<4) {
    printf("%d\n",range[i]);
    i++;
}*/
for (i=0; i<10; i++);
    printf("%d\n",range[i]);
switch(range) {
    case 0 ... 10:
    printf("Nobody");
    break;
    case 20 ... 30:
    printf("Rookie Baylor");
    break;
    case 40 ... 50:
    printf("Howler Longhee");
    break;
    case 60 ... 70:
}



return 0;
}