#include <stdio.h>

int main()
{
	int a,b,c=0,d=0;
    scanf("%d",&a);
    b=a;
    while(a!=0)
{
    d=a%10;
    c=c+d*d*d;
    a=a/10;
}
if(c==b)
printf(" %d is an armstrong number",b);
else
printf(" %d is not an armstrong number",b);
	return 0;
}
