#include<stdio.h>
main()
{
	int i,j,n=4;
	int px=n,py=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n*2;j++)
		{
			if(j>=px && j<=py)
		{
		printf("*");
	}
	else
	{
		printf(" ");
	}
}
	px--;
	py++;
	printf("\n");
	}
}
