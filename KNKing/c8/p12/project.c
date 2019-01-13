#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c;
	unsigned int map[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	unsigned int score=0;

	printf("Enter a word: ");
	c = toupper(getchar());
	while(c != '\n') {
		score += map[-('A'-c)];
		c = toupper(getchar());
	}
	printf("Scrabble value: %d\n", score);
	return 0;
}
