#include <stdio.h>
#include <stdbool.h>

int main()
{
    int condition1 = true;
    int condition2 = false;

    if (condition1)
    {
        printf("Condition 1 is true\n"); // statement 1.1
    }
    else
    {
        printf("Condition 1 is false\n"); // statement 1.2
    }

    if (condition2)
    {
        printf("Condition 2 is true\n"); // statement 2.1
    }
    else
    {
        printf("Condition 2 is false\n"); // statement 2.2
    }
}

//0 is seen as false value, while 1 is considered to be true. 
//This is why the first if statement is executed, while the second one is not.