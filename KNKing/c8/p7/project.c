#include <stdio.h>
#include <ctype.h>

#define ROW ((int)(sizeof(array[0])/sizeof(array[0][0])))
#define COL 5

int main(void)
{
	int array[5][5]={0};
	int row_sum[5]={0};
	int col_sum[5]={0};

	for (int i=0; i<ROW;  i++) {
		printf("Enter row %d: ", i+1);
		for (int j=0; j<COL; j++) {
			scanf("%d", &array[i][j]);
			row_sum[i]+=array[i][j];
			col_sum[j]+=array[i][j];
		}
	}

	printf("Row totals: ");
	for (int i=0; i<ROW; i++) {
		printf("%d ",row_sum[i]);
	}
	printf("\nColumn totals: ");
	for (int i=0; i<COL; i++) {
		printf("%d ",col_sum[i]);
	}
	printf("\n");

	return 0;
}
