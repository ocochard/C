#include <stdio.h>

int main(void)
{
	float s=0, tax=0;

	printf("Enter income: ");
	scanf("%f", &s);
	if (s<750) tax=s*0.01;
	else if (s<2250) tax=7.50 + (s-750)*0.02;
	else if (s<3750) tax=37.50 + (s-2250)*0.03;
	else if (s<5250) tax=82.50 + (s-3750)*0.04;
	else if (s<7000) tax=142.50 + (s-5250)*0.05;
	else tax=230.00 + (s-7000)*0.06;
	printf("Amount of tax: $%.2f\n",tax);
	return 0;
}
