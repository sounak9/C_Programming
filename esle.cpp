#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,k;
	printf("enter the first marks of the candidate ");
	scanf("%d", & a);
	printf("enter the second marks of the candidate ");
	scanf("%d", & b);
	printf("enter the third marks of the candidate ");
	scanf("%d", & c);
	if(a>b&&a>c)
	k=a;
	{
		printf("is largest %d ", k);
	}
	else if(b>a&&b>c)
	k=b
	{
	   printf("is largest %d ", k);
	}
	else if(c>a&&c>b)
	k=c;
	{
		printf("is largest %d ", k);
		
	}
	else
	{
		printf("all are equal");
	}
	getch();

}
