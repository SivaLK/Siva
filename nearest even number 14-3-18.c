#include <stdio.h>
 int main() 
{
	int sum,even;
	printf("enter the number:");
	scanf("%d",&sum);
	if(sum%2==0)
	{
		even=sum-2;	
	}
	else
	{
		even=sum-1;
	}
	printf("\n%d",even);
	return 0;
}
