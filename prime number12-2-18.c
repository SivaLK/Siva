#include <stdio.h>

int main()
{
int a,i,b=0;
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
{
b++;
}
}
if(b>0)
{
printf(" %d is not prime number");
}
else
{
printf(" %d is a prime number");
}
return 0;
}
