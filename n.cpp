#include<stdio.h>
#include<conio.h>
main()
{
	int n,sum=0,i;
	printf("enter the no");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("The sum of natural no is %d \n",sum);
	getch();
}
