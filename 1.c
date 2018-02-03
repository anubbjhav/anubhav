#include<stdio.h>
#include<string.h>

void main()
{
	char a[100];
	int i,length;
	printf("enter string");
	gets(a);
	length=strlen(a);
	printf("reverse is");
	for(i=length;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}
