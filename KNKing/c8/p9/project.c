#include <stdio.h>
#include <ctype.h>
#include <time.h>

#define ROW 10
#define COL 10

/* Work in progress */

int main(void)
{
	char array[ROW][COL];
	char path='A';
	int i,j, x=0, y=0, direction=0;
	srand((unsigned) time(NULL));

	/* init array */
	for (i=0; i<ROW;  i++) {
		for (j=0; j<COL; j++) {
			array[i][j]='.';
		}
	}

	/* firs step */
	array[x][y]=path;
	path++;

	/* main loop */

	while (true) {
		direction = rand() % 4;
	}

	/* Display array */
	for (i=0; i<ROW;  i++) {
		for (j=0; j<COL; j++) {
			printf("%c ",array[i][j]);
		}
		printf("\n");
	}

	return 0;
}
