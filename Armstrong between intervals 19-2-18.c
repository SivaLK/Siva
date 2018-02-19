#include <stdio.h>

int main()
{
     int a,b,temp,i,rem=0;
   printf("Enter the two numbers\n");
 scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
int sum=0;
    temp=i;
    while(temp!=0)
{
    rem=temp%10;
    sum=sum+rem*rem*rem;
    temp=temp/10;
}
if(sum==i)
printf("The armstrong numbers between two intervals are :%d\n",sum);
}
return 0;
}
