#include<stdio.h>
#include<conio.h>
main()
{
	int age;
	printf("enter your age ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are eligble for vote");
	}
	else
	{
		printf("you are not eligble for vote");
	}
	getch();
}
