#include<stdio.h>
main()
{
	int p,t;
	float r,sp;
	printf("enter principle :");
	scanf("%d",&p);
	printf("enter rate :");
	scanf("%f",&r);
	printf("enter time :");
	scanf("%d",&t);
	sp=(p*t*r)/100;
	printf("your simple interest is :%f",sp);
	
}
