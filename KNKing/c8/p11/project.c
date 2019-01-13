#include <stdio.h>

int main(void)
{
	int c[15], i=0;

	for (i=0; i<15 ; i++) {
		c[i]='\n';
	}
	i=0;
	printf("Enter phone number: \n");
	do {
		c[i]=getchar();
		switch(c[i]) {
			case 'A':
			case 'B':
			case 'C':
				c[i]='2';
				break;
			case 'D':
			case 'E':
			case 'F':
				c[i]='3';
				break;
			case 'G':
			case 'H':
			case 'I':
				c[i]='4';
				break;
			case 'J':
			case 'K':
			case 'L':
				c[i]='5';
				break;
			case 'M':
			case 'N':
			case 'O':
				c[i]='6';
				break;
			case 'P':
			case 'R':
			case 'S':
				c[i]='7';
				break;
			case 'T':
			case 'U':
			case 'V':
				c[i]='8';
				break;
			case 'W':
			case 'X':
			case 'Y':
				c[i]='9';
				break;
			default:
				break;
		}
		i++;
	} while((c[i-1] != '\n') || (i == 15));

	i=0;
	while ((c[i] != '\n') || (i==15)) {
		printf("%c",(char)c[i]);
		i++;
	}
	return 0;
}
