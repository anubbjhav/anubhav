#include <stdio.h>
int main()
{
    int min,hr;
    printf("enter time in minutes");
    scanf("%d",&min);
    hr=min/60;
    int m=min%60;
    printf("%d %d",hr,m);

    return 0;
}
