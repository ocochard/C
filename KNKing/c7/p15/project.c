#include <stdio.h>

int main(void)
{
	short s=1;
	int input,i=1;
	long l=1;
	long long ll=1;
	float f=1;
	double d=1;
	long double ld=1;

	printf("Enter a positive integer: ");
	scanf("%d",&input);

	for (int j=1; j<=input; j++) {
		s*=(short)j;
		i*=(int)j;
		l*=(long)j;
		ll*=(long long)j;
		f*=(float)j;
		d*=(double)j;
		ld*=(long double)j;
	}
	printf("factorial of %d (short):       %hd\n",input,s);
	printf("factorial of %d (int):         %d\n",input,i);
	printf("factorial of %d (long):        %ld\n",input,l);
	printf("factorial of %d (long long):   %lld\n",input,ll);
	printf("factorial of %d (float):       %f\n",input,f);
	printf("factorial of %d (double):      %lf\n",input,d);
	printf("factorial of %d (long double): %Lf\n",input,ld);

	return 0;
}
