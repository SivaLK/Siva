#include<stdio.h>
int main()
{
	char s[32],count=0,i;
	printf("Enter the line");
	gets(s);
	for(i=0;s[i]!=NULL;i++)
	{
	if(s[i]==' ')
	count++;
	}
	printf("\n The total number of spacing is %d",count);
	return 0;
	}
