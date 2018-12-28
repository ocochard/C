#include <stdio.h>

int main(void)
{
	printf("Sizeof in bytes: \n");
	printf("int: %lu\n", sizeof(int));
	printf("long: %lu\n", sizeof(long));
	printf("float: %lu\n", sizeof(float));
	printf("double: %lu\n", sizeof(double));
	printf("long double: %lu\n", sizeof(long double));
	return 0;
}
