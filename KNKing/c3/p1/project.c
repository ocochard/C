#include <stdio.h>

int main(void)
{
	int m=0, d=0, y=0;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("You entered the date %d%.2d%.2d\n", y,m,d);
	return 0;
}
