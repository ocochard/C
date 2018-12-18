#include <stdio.h>

int main(void)
{
	/* did: input date in day
	   eid: earliest date in day */
	int d=1,m=1,y=1,idid=0,eid=0;

	for (;;) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &m, &d, &y);
		if (d == 0 && m == 0 && y == 0) break;
		idid= y*365 + m*31 + d;
		if ( eid == 0 || idid<eid ) {
			eid=idid;
		}
	}
	y = eid / 365;
	eid = eid - y*365;
	m= eid / 31;
	d = eid - m*31;
	printf("%d/%d/%d is the earliest date\n",m,d,y);
	return 0;
}
