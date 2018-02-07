#include <stdio.h>
int main()
{
int i,a,b,c;
printf("enter the value : ");
scanf("%d",&a);
printf("Enter the power value :");
scanf("%d",&b);
ans=1;
for(i=1;i<=b;i++)
{
	c=c*b;
}
printf("the value is:%d",c);
return 0;
}
