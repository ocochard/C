#include <stdio.h>

int main(void)
{
	const int segments[10][7] = {{1,1,1,1,1,1},
								 {0,1,1},
								 {1,1,0,1,1,0,1},
								 {1,1,1,1,0,0,1},
								 {0,1,1,0,0,1,1},
								 {1,0,1,1,0,1,1},
								 {1,0,1,1,1,1,1},
								 {1,1,1},
								 {1,1,1,1,1,1,1},
								 {1,1,1,1,0,1,1},
								};

	for (int i=0;i<10;i++) {
		if (segments[i][0]) printf(" - \n");
		if ((segments[i][1]) && (segments[i][5])) printf("| |\n");
		else if ((segments[i][1]) && !(segments[i][5])) printf("  |\n");
		else if (!(segments[i][1]) && (segments[i][5])) printf("|  \n");
		if (segments[i][6]) printf(" - \n");
		if ((segments[i][2]) && (segments[i][4])) printf("| |\n");
		else if ((segments[i][2]) && !(segments[i][4])) printf("  |\n");
		else if (!(segments[i][2]) && (segments[i][4])) printf("|  \n");
		if (segments[i][3]) printf(" - \n");
		printf("\n");
	}
	return 0;
}
