#include <stdio.h>

int main()
{
	int x;
	int y = x + 5; // using uninitizalized variable x
	printf("%d \n", y);
}
