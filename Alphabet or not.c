#include <stdio.h>

int main()
{
    char n;int d;
    printf("Enter a data");
    scanf("%c",&n);
    d=(int)n;
    if((d>=65&&d<=90)||(d>=97&&d<=122))
        printf("\nThe entered data %c is an Alphabet");
    else
        printf("\nThe entered data %c is not an alphabet");
    return 0;
}
