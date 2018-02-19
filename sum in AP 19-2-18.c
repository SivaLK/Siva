#include <stdio.h>

int main()
{
	long int a,b,i,sum=0;
	printf("Enter the three numbers\n");
	scanf("%ld %ld %ld",&a,&b,&i);
  sum = (b*(2*a+(b-1)*i))/2;
	printf("\nThe value is %ld",sum);
	return 0;
}
