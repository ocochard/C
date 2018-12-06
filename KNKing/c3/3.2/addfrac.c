#include <stdio.h>

int main(void)
{
	int num1=0, denom1=0, num2=0, denom2=0, result_num=0, result_denom=0;

	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1);
	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);
	return 0;
}
