#include <stdio.h>

int main()
{
    int a,i,fact=1;
    printf("Enter a number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
{ 
    fact=fact*i;
	
}
    printf("\nThe factorial of the given number is %d",fact);
	return 0;
}
