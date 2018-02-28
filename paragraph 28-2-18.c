#include<stdio.h>
int main()
{
char string[50];
int i,count=0;
printf("Enter the data");
scanf("%s",&string[i]);
while(string[i]!='\0')
{
if(string[i]=='.')
{
count+=1;
}
i++;
}
printf("%d",count);
return 0;
}
