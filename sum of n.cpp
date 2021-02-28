#include<stdio.h>
main()
{
int n,i,sum=0;
printf("enter the value of n :");
scanf("%d",&n);
for(i=0;i<=n;i++);
{
	sum=sum+i;
}
printf("the sum of %dth natural number is : %d",n,sum);
}
