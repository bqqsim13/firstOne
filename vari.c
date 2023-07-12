#include <stdio.h>
int main()
{
    int x = 5;
    int y = 16; // Variable x declared in the main function
    printf(" Before the for loop : x = %d\n", x);
    for (int i = 0; i < 3; i++)
    {
        y = i * 2; // Variable y declared inside the for loop
        printf(" Inside the for loop : y = %d\n", y);
        printf(" Inside the for loop : x = %d\n", x);
    }
    printf(" Outside the for loop : y = %d\n", y);
    printf(" After the for loop : x = %d\n", x);
}