#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int c=0,i=0,j=0,end=0,sentence[90]={0},space_position[10]={0};

	/* i: index of sentence table
	   j: index of space table */
	printf("Enter a sentence: ");
	space_position[j]=0;
	j++;
	do {
		c=getchar();
		if (c == ' ') {
			space_position[j]=i;
			j++;
		} else if ((c != '!') || (c != '?') || (c != '.')) {
			sentence[i]=c;
			i++;
		}
	} while (c != '\n');
	/* remove the last '\n' */
	i--;

	/* remove the last ?!. */
	i--;
	end=sentence[i];

	space_position[j]=i;

	/* sentence[90]: youcancageaswallowcan'tyou?
	   space_position[10]: 0 3 6 10 11 18 23 26
	   i=26
	   j=7
	   loop using the space table */
	for (int k=j; k>=0; k--) {
		for (int l=space_position[k-1]; l<space_position[k]; l++) {
			printf("%c", sentence[l]);
		}
		printf(" ");
	}
	printf("\b%c\n", end);

	return 0;
}
