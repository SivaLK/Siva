#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("ENTER A NUMBER:\n");
	scanf("%d",&a);
	int d=a;
	while(a!=0)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
	}
	if(c==d)
	{
		printf("%d IS A PALLINDROME",d);
	}
	else
	{
		printf(" %d IS NOT A PALLINDROME",d);
	}
	return 0;	
}
