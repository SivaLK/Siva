#include <stdio.h>
main()
{
int a,b,i,j;
printf("Enter the two numbers");
scanf("%d,%d",&a,&b);
for(i=a;i<b;i++)
{ int count=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
count++;
}
}
if(count==0)
{
printf("%d\n",i);
}
}
return 0;
}
