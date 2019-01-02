#include <stdio.h>

int main(void)
{
	float temperature_readings[30][24];
	float temperature_average_per_day[30];
	float temperature_average_per_month=0;
	for (int d=0;d<30;d++) {
		for (int h=0;h<24;h++) {
			temperature_average_per_day[d]+=temperature_readings[d][h];
		}
		temperature_average_per_day[d]/=24;
		temperature_average_per_month+=temperature_average_per_day[d];
	}
	temperature_average_per_month/=30;
	return 0;
}
