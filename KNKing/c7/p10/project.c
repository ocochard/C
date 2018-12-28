#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c=0,v=0;

	printf("Enter a sentence: ");
	do {
		c=getchar();
		switch (toupper(c)) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'Y':
			v++;
			break;
		}
	} while (c != '\n');

	printf("Your sentence contains %d vowels.\n", v);
	return 0;
}
