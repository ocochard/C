#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> /* rand and srand are obsolete, need to use arc4random*/
#include <ctype.h>

#define ROW 10
#define COL 10

/* Work in progress */

int main(void)
{
	char array[ROW][COL];
	char path='A';
	int i,j, x=0, y=0, nx=0, ny=0, direction=0;
	bool lup=false, ldown=false, lright=false, lleft=false;

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
		//direction = rand() % 4;
		direction = arc4random() % 4;
		nx=x;
		ny=y;
		/* direction definition
		/  0: up, row-1
		/  1: right, col+1
		/  2:down, row+1
		/  3:left, col-1 */

		/* if all previous directions where tested, exit loop */
		if (lup && ldown && lleft && lright) {
			break;
		}
		switch(direction) {
		case 0:
			nx=x-1;
			if ((nx==ROW) || (nx<0) || array[nx][ny]!='.') {
				lup=true;
				continue;
			}
			break;
		case 1:
			ny=y+1;
			if ((ny==COL) || (ny<0) || array[nx][ny]!='.') {
				lright=true;
				continue;
			}
			break;
		case 2:
			nx=x+1;
			if ((nx==ROW) || (nx<0) || array[nx][ny]!='.') {
				ldown=true;
				continue;
			}
			break;
		case 3:
			ny=y-1;
			if ((ny==COL) || (ny<0) || array[nx][ny]!='.') {
				lleft=true;
				continue;
			}
		break;
		}

		//printf("dir: %d (%c)x/y: %d/%d nx/ny: %d/%d\n",direction,path-1,x,y,nx,ny);
		x=nx;
		y=ny;
		lleft=false;
		lright=false;
		lup=false;
		ldown=false;
		array[x][y]=path;
		path++;
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
