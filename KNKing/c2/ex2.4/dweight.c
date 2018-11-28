#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint16_t height=8, length=12, witdh=10, volume=0;
	volume = height * length * witdh;

	printf("Dimensions: %dx%dx%d\n", length, witdh, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}
