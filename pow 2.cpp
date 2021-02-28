#include<stdio.h>
main()
{
	int n,sum=0,i;
	printf("enter the no : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(((2*i)-1)*((3*i)-2));
	  
	}
	printf("%d",sum);
}
