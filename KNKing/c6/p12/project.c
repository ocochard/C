#include <stdio.h>

int main(void)
{
	float E=0.0, f=1.0, r=1.0;
	int i=0;
	printf("Enter E: ");
	scanf("%f", &E);
	for (i=1;; i++) {
		for (int j=1; j<=i; j++) {
			f = f * j;
		}
		if (1/f < E) break;
		r = r + 1 / f;
	}

	printf("i=%d, e = %f\n",i, r);
	return 0;
}
