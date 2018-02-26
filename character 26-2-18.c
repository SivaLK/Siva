#include<stdio.h>
int main()
{
	char a[100];
	int n,count=0,i;
	printf("Enter any Character or Word");
	scanf("%[^\t]s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
		count++;
		}
	}
	printf("\n Total count is %d",count);
}       
