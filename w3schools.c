#include <stdio.h>

int main(int argc, char const *argv[])
{
    // create variables
    int myNum = 5;
    float myFloatNum = 5.99;
    char myLetter = 'D';

    // print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    printf("This is a number %d and this is my letter %c\n", myNum, myLetter);

    return 0;
}
