#include <stdio.h>
#include <math.h>

int main(void)
{
	int x;
	double p=0.00001, old_y=0, y=1.0;

	printf("Enter a positive number: ");
	scanf("%d",&x);

	do {
		old_y=y;
		y=(y+x/y)/2;
	} while (fabs(old_y - y) > y*p);
	printf("Square root: %lf\n",y);

	return 0;
}
