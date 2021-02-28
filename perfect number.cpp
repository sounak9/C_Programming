 //Write a C program to  find a number is Perfect number or not
 #include<stdio.h>
 #include<conio.h>
 main()
 {
 	int i,n,sum=0,r;
 	printf("enter the number n: ");
 	scanf("%d", &n);
 	for(i=1;i<n;i++)
 	{
 		r=n%i;
 		if(r==0)
 		{
 		sum=sum+i;
 	}
	 }
 	if (n==sum)
 	{
 		printf("%d is a perfect number",n);
	 }
	 else
	 {
	 	printf("%d is not a perfect number");
	 }
 }
