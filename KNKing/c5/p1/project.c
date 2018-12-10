#include <stdio.h>

int main(void)
{
	int d=0;

	printf("Enter a number: ");
	scanf("%d", &d);
	printf("The number %d has ", d);
	if (d<9) {
		printf("1");
	} else if (d >= 10 && d <= 99) {
		printf("2");
	} else {
		printf("3");
	}
	printf(" digits\n");
	return 0;
}
