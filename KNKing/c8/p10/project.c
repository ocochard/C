#include <stdio.h>

int main(void)
{
	unsigned int t,m,from;
	unsigned int depart[8]={8*60,9*60+43,11*60+19,12*60+47,14*60,15*60+45,19*60,21*60+45};
	unsigned int arrival[8]={10*60+16,11*60+52,13*60+31,15*60,16*60+8,17*60+55,21*60+20,23*60+58};

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &t, &m);
	from=t*60+m;
	for (int i=0; i<8; i++) {
		if (from < depart[i]) {
			printf("Departure: %d:%.2d, Arrival: %d:%.2d\n",depart[i]/60,depart[i]%60,arrival[i]/60,arrival[i]%60);
			break;
		}
	}
	return 0;
}
