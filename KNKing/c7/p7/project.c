#include <stdio.h>

int main(void)
{
	int num1=0, denom1=0, num2=0, denom2=0, result_num=0, result_denom=0;
	int c=0;

	printf("Enter two fraction separated by a +-*/ sign: ");
	scanf("%d/%d", &num1, &denom1);
	c=getchar();
	scanf("%d/%d", &num2, &denom2);

	switch (c) {
	case '+':
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		break;
	case '-':
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
		break;
	case '*':
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		break;
	case '/':
		result_num = num1 * denom2;
		result_denom = denom1 * num2;
		break;
	default:
		printf("Error!\n");
		break;
	}
	printf("The result is %d/%d\n", result_num, result_denom);
	return 0;
}
