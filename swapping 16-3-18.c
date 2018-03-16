#include <stdio.h>
int main() 
{
int x,y,temp;
printf("\n enter two numbers to swap:");
scanf("%d %d",&x,&y);
printf("\nx=%d",x);
printf("\ny=%d",y);
temp=x;
x=y;
y=temp;
printf("\nx=%d",x);
printf("\ny=%d",y);
return 0;
}
