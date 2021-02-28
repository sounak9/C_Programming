#include<stdio.h>
 main()
 {
float p ;
int t,g;
float tip,tax;
int total;
scanf("%f\n",&p);
scanf("%d\n",&t);
scanf("%d",&g);
tip=(p*t)/100;
tax=(p*g)/100;
total=p+tip+tax;
printf("%d",total);
 }
