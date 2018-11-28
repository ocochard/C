#include <stdio.h>
#include <stdint.h>

int main(void)
{
	float x=0;
	printf("Enter x: ");
	scanf("%f",&x);
	printf("polynomial   : %f\n", 3 * x * x * x * x *x + 2 * x *x *x *x - 5 * x * x * x - x * x + 7 * x - 6);
	printf("Horner's Rule: %f\n", ((((3 * x + 2) * x - 5 ) *x - 1) * x + 7) *x - 6);
	return 0;
}
