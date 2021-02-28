#include<stdio.h>
#include<math.h>
main()
{
	int n,sum=0,i;
	printf("enter the no : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow((i*((2*i)-1)),2);
	  
	}
	printf("The sum is %d ",sum);
}
