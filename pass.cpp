#include<stdio.h>
#include<conio.h>
main()
{
	int eng,math,phy,chem,comp,total;
	float per;
	printf("Enter your marks in eng: ");
	scanf("%d",&eng);
	printf("Enter your marks in math: ");
	scanf("%d",&math);
	printf("Enter your marks in phy: ");
	scanf("%d",&phy);
	printf("Enter your marks in chem : ");
	scanf("%d",&chem);
	printf("Enter your marks in comp: ");
	scanf("%d",&comp);
	total=eng+math+phy+chem+comp;
	per=(total*100)/500;
	printf("total marks obtained in five subjects : %d\n",total);
	printf("the total prcentage obtained : %0.2f",per);
	getch();
}
