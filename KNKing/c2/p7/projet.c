#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint16_t amount=0;
	printf("Enter a dollar amount: ");
	scanf("%hd",&amount);
	printf("$20 bills: %u\n", amount / 20);
	amount = amount - 20 * (amount / 20 );
	printf("$10 bills: %u\n", amount / 10);
	amount = amount - 10 * (amount / 10 );
	printf("$5 bills: %u\n", amount / 5);
	amount = amount - 5 * (amount / 5);
	printf("$1 bills: %u\n", amount);
	return 0;
}
