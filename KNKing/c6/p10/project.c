#include <stdio.h>

int main(void)
{
	int n=0;
	float f=1.0, r=1.0;

	printf("Enter n: ");
	scanf("%d", &n);
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=i; j++) {
			f = f * j;
		}
		r = r + 1 / f;
	}

	printf("e = %f\n",r);
	return 0;
}
