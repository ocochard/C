#include <stdio.h>

int main(void)
{
	int d=0;

	printf("Enter a tree digit number: ");
	scanf("%d", &d);

	printf("Reversed: %d%d%d\n", d % 10 , (d - (d / 100 * 100  ) )/ 10, d / 100);
	return 0;
}
