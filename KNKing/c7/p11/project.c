#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int c=0,first=0;
	bool finished=false;

	printf("Enter a first and last name: ");
	do {
		c=getchar();
		if (finished == false) {
			first=c;
			finished=true;
		}
	} while (c != ' ');
	while (c != '\n') {
		if (c != ' ') {
			putchar(c);
		}
		c=getchar();
	}
	printf(", %c.\n",first);
	return 0;
}
