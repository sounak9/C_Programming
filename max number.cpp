#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter three number: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b)
	
		if(a>=c)
		printf("the max number is %d",a);
		else
		printf("the max number is %d",c);
	else
	if(b>=c)
	printf("the max number is %d",b);
	else
	printf("the max number is %d",c);
	getch();
}
