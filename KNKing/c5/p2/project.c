#include <stdio.h>

int main(void)
{
	int h=0,m=0;

	printf("Enter a 24-hour time (ex 21:11): ");
	scanf("%d:%d", &h, &m);
	printf("Equivalent 12-hour time: ");
	if (h < 13) {
		printf("%d:%.2d AM\n", h, m);
	} else {
		printf("%d:%.2d PM\n", h-12, m);
	}

	return 0;
}
