#include <stdio.h>

int main(void)
{
	int m=0, n=0, gcd=0, t=0, mo=0, no=0;

	printf("Enter a fraction: ");
	scanf("%d/%d",&m,&n);
	mo=m;
	no=n;
	if (n == 0) {
		gcd=m;
	} else {
		while(n!=0) {
			t=m%n;
			gcd=m=n;
			n=t;
		}
	}
	printf("In lowest terms: %d/%d\n", mo/gcd, no/gcd);
	return 0;
}
