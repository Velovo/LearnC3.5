#include <stdio.h>

int main(void)
{
	int age;

	printf("Enter your age in years:");
	scanf_s("%d", &age);
	printf("You have lived %le seconds", age*3.156e7 );

	return 0;
}