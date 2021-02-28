/* Write a Program to check whether two numbers are equal, not equal, whether one number is greater, lesser, lesser than equal to, greater than equal to etc and output accordingly. */
#include <stdio.h>
main()
{
	int a,b;
	printf("Enter the two numbers : ");
	scanf("%d%d",&a&b);
	if(a==b)
	{
		if(a>b)
		{
			printf("%d is greater than %d",a,b);
		}
		else
		{
			printf("%d is greater than %d",b,a);
		}
		
		printf("given two numbers are equal");
		
	}
}

