#include <stdio.h>

int main(void)
{
	int d=0;

	printf("Enter a two digit number: ");
	scanf("%d", &d);

	printf("Reversed: %d%d\n", d % 10 , d / 10);
	return 0;
}
