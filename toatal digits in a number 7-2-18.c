#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n!=0)
    {   
        n/=10;
        i=i+1;
     }
     printf("%d",i);
}
    
