#include<stdio.h>
main()
{
	int n,sum=0,i;
	printf("enter the no \n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		
		sum =sum+2*i;
	
	}
	printf("The sum of even natural no is %d \n",sum);
}
