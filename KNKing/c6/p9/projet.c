#include <stdio.h>
#include <stdint.h>

int main(void)
{
	float amount=0, interest=0, monthly=0;
	int n=0;

	printf("Enter amount of loan: ");
	scanf("%f",&amount);
	printf("Enter interest rate: ");
	scanf("%f",&interest);
	printf("Enter monthly payment: ");
	scanf("%f",&monthly);
	printf("Enter number of payment: ");
	scanf("%d",&n);

	for(int i=1; i<=n; i++) {
		amount = amount - monthly + amount * interest / 100 / 12;
		printf("Balance remaining after payment number %d: $%.2f\n", i, amount);
	}
	return 0;
}
