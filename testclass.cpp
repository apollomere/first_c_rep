#include <stdio.h>

int main()
{
    //1.Compiler
    float fValue;
    char resp = 'Y';
    char stringArray[] = {"Hello!\n"};
    
    int value;

    scanf("%d", &value);
    if (value >= 25 && value <= 35) {
        printf("Correct Range");
    }
    else {
        printf("Non Ideal Range");
    }
    //3. Integer(Int/%d), Float(floar/%f), Character(char/%c)
    //4. Yes, it is an if statement, or rather a short if else statement.
    //5.

    int ival = 100;
    int i=0;
    while(ival<=120) {
        printf("First Statement:%d\n", ival);
        ival++;
        if (ival>=120) {
            break;
        }
    }

    for (ival; ival<=120; i++) {
        printf("Second Statement:%d\n",ival);
        if (ival>=120) {
            break;
        }
    }

    do {
        printf("Third Statement:%d", ival);
        i++;
    }while (ival<120);
    //6. else statement
    //7.int main(){}
    //8. Less Than(<), Greater Than(>), Equal To(==)

    return 0;
}