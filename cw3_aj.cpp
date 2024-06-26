#include <stdio.h>

int main()
{
    printf("Hello World");

    return 0;
}




/*Common Practices:
-When writing code be clear in your statements!
data types can be called in the same line via; int a, b;
In if/else ALWAYS put braces(whether it's a single statement or not
Only place you dont put a brace is for the switch)
Multiline executables require a brace
example;
switch*marks){
    case 0...60:
            printf("fail/n");
            break;
    case 70...79:
            printf("C/n");
            break;
    case 80..100:
            printf("");
            break;
    default:
            printf("");
}

return 0;

}

For C we have a Makefil(compiles everything into one big executable application!

Why do we need gcc? Answer: For checking portions of code and testing before it becomes part
of the big application(VITAL)
Sometimes when your code is part of a big applicaiton, and itm ight not work!
If you ran it multiple tiems and it works, it may be osmething else that came in and is
inter)

With an if, always have the brace  or break
for switches, always have a break after the parameter/print

Happy path testing; testing your program for valid values/ values

arrays cam cpmtaom specific value types*/