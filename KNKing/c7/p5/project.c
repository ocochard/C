#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c, score=0;

	printf("Enter a word: ");
	do {
		c = getchar();
		switch(toupper(c)) {
			case 'A':
			case 'E':
			case 'I':
			case 'L':
			case 'N':
			case 'O':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
				score++;
				break;
			case 'D':
			case 'G':
				score+=2;
				break;
			case 'B':
			case 'C':
			case 'M':
			case 'P':
				score+=3;
				break;
			case 'F':
			case 'H':
			case 'V':
			case 'W':
			case 'Y':
				score+=4;
				break;
			case 'K':
				score+=5;
				break;
			case 'J':
			case 'X':
				score+=8;
				break;
			case 'Q':
			case 'Z':
				score+=10;
				break;
		}
	} while(c != '\n');
	printf("Scrabble value: %d\n", score);
	return 0;
}
