#include <stdio.h>
 
int main()
{
	char a[100];
   int i,k;
   printf("Enter the character and a number");
   scanf("%s %d",a,&k);
  for(i=1;i<=k;i++)
    {
    printf("%s\n",a);
    }
    return 0;
    }
