#include <stdio.h>

int main(void)
{
	int dim=0, sdotw=0;

	printf("Enter number of days in month: ");
	scanf("%d", &dim);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &sdotw);

	for(int c=1, i = 1 ; c <= dim; ++i) {
		if (i < sdotw) {
			printf("   ");
		} else {
			printf("%3d",c);
			c++;
		}
		if (i%7 == 0) {
			printf("\n");
		}
	}

	return 0;
}
