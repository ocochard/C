#include <stdio.h>

int main(void)
{
	int a,b,c,d, large, small;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	large = small = a;
	if (large < b ) large=b;
	else small=b;
	if (large < c ) large=c;
	if (small > c ) small=c;
	if (large < d ) large=d;
	if (small > d ) small=c;
	printf("Largest: %d\n",large);
	printf("Smallest: %d\n", small);
	return 0;
}
