#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("\n%d is the largest number",a);
	
	}
	else if(b>c)
	{
		printf("\n%d is the largest number",b);
	}
	else
	{
		printf("\n%d is the largest number",c);
	
	}
	return 0;
}
