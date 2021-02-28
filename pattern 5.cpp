#include<stdio.h>
#include<math.h>
main()
{
	int n=4;
	int i,j,k;
	for(i=n;i>=-n;i--)
	{
		for(j=1;j<=abs(i);j++)
		{
			printf(" ");
		}
		for(k=n;k>=abs(i);k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
