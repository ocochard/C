#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int o;
	float a,b,c,d;

	printf("Enter an expression: ");
	scanf("%f",&a);
	o=getchar();
	scanf("%f",&b);
	switch (o) {
		case '+':
			c=a+b;
			break;
		case '-':
			c=a-b;
			break;
		case '*':
			c=a*b;
			break;
		case '/':
			c=a/b;
			break;
	}
	o=getchar();
	scanf("%f",&d);
	switch (o) {
		case '+':
			c+=d;
			break;
		case '-':
			c-=d;
			break;
		case '*':
			c*=d;
			break;
		case '/':
			c/=d;
			break;
	}
	printf("Value of expression: %f\n",c);
	return 0;
}
