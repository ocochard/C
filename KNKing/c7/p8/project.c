#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c=0,t,m,from;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d", &t, &m);
	do {
		c=getchar();
		if (toupper(c)=='P') {
			t+=12;
			break;
		}
	} while (c != '\n');

	from=t*60+m;
	if ( from < (8*60)) {
		printf("8:00 am\n");
	} else if ( from < (9*60+43)) {
		printf("9:43 am\n");
	} else if ( from < (11*60+19)) {
		printf("11:19 am\n");
	} else if ( from < (12+2)*60) {
		printf("2:00 pm\n");
	} else if ( from < ((12+3)*60+45)) {
		printf("3:45 pm\n");
	} else if ( from < ((12+7)*60)) {
		printf("7:00 pm\n");
	} else if ( from < (9*60+43)) {
		printf("9:43 am\n");
	} else if ( from < (11*60+19)) {
		printf("11:19 am\n");
	} else if ( from < ((12+9)*60+45)) {
		printf("9:45pm\n");
	}
	return 0;
}
