#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i=0,c=0,w=0;

	printf("Enter a sentence: ");
	do {
		i=getchar();
		/* If it's a space, new word
		 * But if no space, count char */
		if (i == ' ') {
			w++;
		} else {
			c++;
		}
	} while (i != '\n');
	/* Need to add the last word */
	w++;

	printf("Your sentence contains %d word and a total of %d char.\n", w,c);
	printf("Average word length: %.1f",(float)c/w);
	return 0;
}
