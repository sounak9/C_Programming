#include<stdio.h>
#include<conio.h>
main()
{
	int n,s=0,i,j=1;
	printf("enter the no \n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		s=s+(i*j);
		j=j+3;
	  
	}
	printf("The sum is %d \n",s);
	
}
