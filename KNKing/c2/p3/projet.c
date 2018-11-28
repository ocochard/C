#include <stdio.h>
#include <stdint.h>

int main(void)
{
	float pi = 3.1415927f;
	uint16_t radius = 10;
	printf("Enter the radius : ");
	scanf("%hu",&radius);
	printf("Result: %f\n", 4.0f/3.0f * pi * radius * radius * radius);
	return 0;
}
