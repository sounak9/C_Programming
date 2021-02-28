#include<stdio.h>
#include<math.h>
main()
{
	float p,r,t,ci;
	printf("enter principle value: " );
	scanf("%f",&p);
	printf("enter rate: " );
	scanf("%f",&r);
	printf("enter time: " );
	scanf("%f",&t);
	ci=p*(pow((1+r/100),t));
	printf("your compound interest value is: %f",ci);
}
