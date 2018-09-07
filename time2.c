#include<stdio.h>
int main()
{
int hr,min,hr1,hr2,min1,min2;
printf("\n");
scanf("%d:%d",&hr1,&min1);
printf("\n");
scanf("%d:%d",&hr2,&min2);
hr=hr1-hr2;
min=min1-min2;
printf("%d %d",hr,min);
return 0;
}

