#include <stdio.h>

int main(void)
{
	int d1,m1,y1,d2,m2,y2;

	printf("Enter first date (dd/mm/yy): ");
	scanf("%d/%d/%d", &d1, &m1, &y1);
	printf("Enter second date (dd/mm/yy): ");
	scanf("%d/%d/%d", &d2, &m2, &y2);
	if ( (y1*365 + m1*31 + d1) < (y2*365 + m2*31 + d2)) {
		printf("%d/%d/%d is earlier than %d/%d/%d\n", d1, m1, y1, d2, m2, y2);
	} else {
		printf("%d/%d/%d is earlier than %d/%d/%d\n", d2, m2, y2, d1, m1, y1);
	}
	return 0;
}
