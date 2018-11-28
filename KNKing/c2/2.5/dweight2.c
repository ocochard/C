#include <stdio.h>
#include <stdint.h>

#define INCHES_PER_POUND 166
int main(void)
{
	uint16_t height=0, length=0, witdh=0, volume=0, weight=0;

	printf("Enter height of box: ");
	scanf("%hu", &height);
	printf("Enter length of the box: ");
	scanf("%hu", &length);
	printf("Enter witdh of the box: ");
	scanf("%hu", &witdh);
	volume = height * length * witdh;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}
