#include <stdio.h>

int main(void)
{
	int m=0, n=0, gcd=0, t=0;

	printf("Enter two integers: ");
	scanf("%d %d",&m,&n);
	if (n == 0) {
		gcd=m;
	} else {
		while(n!=0) {
			t=m%n;
			gcd=m=n;
			n=t;
		}
	}
	printf("Greatest common divisor: %d\n", gcd);
	return 0;
}
