#include <stdio.h>

int main(void)
{
	float E=0.0, f=1.0, r=1.0;
	int n=0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=i; j++) {
			f = f * j;
		}
		if (1/f < E) break;
		r = r + 1 / f;
	}

	printf("e = %f\n", r);
	return 0;
}
