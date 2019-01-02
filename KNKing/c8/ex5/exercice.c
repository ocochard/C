#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int fib_numbers[40]= {0,1};

	printf("1\t%d\n",fib_numbers[0]);
	printf("2\t%d\n",fib_numbers[1]);

	for (int i=2; i<40; i++) {
		fib_numbers[i]=fib_numbers[i-2]+fib_numbers[i-1];
		printf ("%d\t%d\n",i+1,fib_numbers[i]);
	}
	return 0;
}
