#include<stdio.h>
main()
{
	float salary,da,ta,gross;
	printf("enter salary :");
	scanf("%f",&salary);
	da=(salary*16)/100;
	ta=(salary*5)/100;
	gross=(salary+da+ta);
	printf("your gross salary is: %f",gross);
}
