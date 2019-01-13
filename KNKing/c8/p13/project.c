#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int c=0,i=0,first=0,last[20];
	bool finished=false;

	printf("Enter a first and last name: ");
	do {
		c=getchar();
		if (finished == false) {
			first=c;
			finished=true;
		}
	} while (c != ' ');

	do {
		last[i]=getchar();
		i++;
	} while ((last[i-1] != '\n') && (i<20));

	i=0;
	while ((last[i] != '\n') && (i<20)) {
		printf("%c",last[i]);
		i++;
	}
	printf(", %c. \n",first);
	return 0;
}
