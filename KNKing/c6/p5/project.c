#include <stdio.h>

int main(void)
{
	int d=0;

	printf("Enter a number: ");
	scanf("%d", &d);
	printf("Reversed: ");
	do {
		printf("%d", d%10);
		d=d/10;
	} while (d!=0);
	return 0;
}
