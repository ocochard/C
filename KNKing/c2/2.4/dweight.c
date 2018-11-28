#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint16_t height=8, length=12, witdh=10, volume=0, weight=0;
	volume = height * length * witdh;
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d\n", length, witdh, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}
