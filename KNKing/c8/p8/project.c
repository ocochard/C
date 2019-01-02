#include <stdio.h>
#include <ctype.h>

#define ROW ((int)(sizeof(array[0])/sizeof(array[0][0])))
#define COL 5

int main(void)
{
	int array[5][5]={0};
	int row_sum[5]={0};
	int col_sum[5]={0};
	int col_min[5]={0};
	int col_max[5]={0};

	for (int i=0; i<ROW;  i++) {
		printf("Student %d quiz grade: ", i+1);
		for (int j=0; j<COL; j++) {
			scanf("%d", &array[i][j]);
			row_sum[i]+=array[i][j];
			col_sum[j]+=array[i][j];
			if ((col_min[j] == 0) || (col_min[j]>array[i][j])) {
				col_min[j]=array[i][j];
			}
			if (col_max[j]<array[i][j]) {
				col_max[j]=array[i][j];
			}
		}
	}

	for (int i=0; i<ROW; i++) {
		printf("Student %d total/avg score: %d/%d\n",i+1,row_sum[i],row_sum[i]/COL);
	}
	for (int i=0; i<COL; i++) {
		printf("Quiz %d average/high/low: %d/%d/%d\n",i+1,col_sum[i]/ROW,col_max[i],col_min[i]);
	}

	return 0;
}
