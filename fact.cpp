#include<stdio.h>
#include<conio.h>
main()
{
	int n,fact=1;
	printf("enter a number :-");
	scanf("%d", & n);
	do
	{
	fact=fact*n;
	n--;
	}
	while(n>0);
	printf("the factorial is = %d", fact);
	getch();
}
