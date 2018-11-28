#include <stdio.h>
#include <stdint.h>

int main(void)
{
	float amount=0, interest=0, monthly=0;
	printf("Enter amount of loan: ");
	scanf("%f",&amount);
	printf("Enter interest rate: ");
	scanf("%f",&interest);
	printf("Enter monthly payment: ");
	scanf("%f",&monthly);
	amount = amount - monthly + amount * interest / 100 / 12;
	printf("Balance remaining after first payment: $%.2f\n", amount);
	amount = amount - monthly + amount * interest / 100 / 12;
	printf("Balance remaining after second payment: $%.2f\n", amount);
	amount = amount - monthly + amount * interest / 100 / 12;
	printf("Balance remaining after third payment: $%.2f\n", amount);
	return 0;
}
