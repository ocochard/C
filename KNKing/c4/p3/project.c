#include <stdio.h>

int main(void)
{
	int a=0, b=0, c=0;

	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d", &a, &b, &c);

	printf("Reversed: %d%d%d\n", c, b, a);
	return 0;
}
