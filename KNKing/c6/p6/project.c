#include <stdio.h>

int main(void)
{
	int n=0;

	printf("Enter a number: ");
	scanf("%d", &n);
	for(int i=1, max=0; max < n; i++) {
		max=i*i;
		if (max % 2 == 0) {
			printf("%d\n",max);
		}
	}
	return 0;
}
