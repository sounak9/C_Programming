#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,n1=0,n2=1,n3=0;
	printf("enter the number : ");
	scanf("%d", & n);
	printf("the fibonnaci series : ");
	printf("%d", & n2);
	for(i=3; i<=n;i++)
	{
		n3=n1+n2;
		printf("%d", & n3);
		n1=n2;
		n2=n3;
	}
	getch();
}
