#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c=0,t,m;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d", &t, &m);
	do {
		c=getchar();
		if (toupper(c)=='P') {
			t+=12;
			break;
		}
	} while (c != '\n');

	printf("Equivalent 24-hour time: %d:%d\n",t,m);
	return 0;
}
