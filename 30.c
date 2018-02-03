#include <stdio.h>
 
int main()
{
	int h,m,h1,h2,m1,m2;
	printf("\nenter the hours and minutes for 1\n");
	scanf("%d\t%d",&h1,&m1);
	printf("enter the hour and minutes for 2");
	scanf("%d\t%d",&h2,&m2);
	h=h1-h2;
	m=m1-m2;
	printf("%d %d",h,m);
 return 0;
}
