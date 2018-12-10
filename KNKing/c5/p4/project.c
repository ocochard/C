#include <stdio.h>

int main(void)
{
	int s=0;

	printf("Enter speed(knots): ");
	scanf("%d", &s);
	if (s<1) printf("Calm\n");
	else if (s<4) printf("Light air\n");
	else if (s<28) printf("Breeze\n");
	else if (s<48) printf("Gale\n");
	else if (s<64) printf("Storm\n");
		else printf("Hurricane\n");
	return 0;
}
