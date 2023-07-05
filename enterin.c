#include <stdio.h>

int main()
{
    int crimes;
    float height;

    printf("How many war crimes have you commit: ");
    scanf("%d", &crimes);

    printf("Enter your height in meters :D: ");
    scanf("%f", &height);

    printf("You have commit %d war crimes and %.2f meters tall. >~< \n", crimes, height);
}
