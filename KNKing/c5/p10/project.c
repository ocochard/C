#include <stdio.h>

int main(void)
{
	int g;

	printf("Enter numerical grade(0 to 100): ");
	scanf("%d", &g);
	if (g<0 || g>100) printf("Error, must be between 0 and 100\n");
	else {
		printf("Letter grade: ");
		switch (g/10) {
		case 9:
			printf("A\n");
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		default:
			printf("F\n");
			break;
		}
	}
	return 0;
}
