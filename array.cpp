#include<stdio.h>;
int main()
{
int n;
int i;
int sum =0;
scanf("%d",&n);
int arr[n];
for(i=0; i<n; i++)
{
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
printf("%d",sum);
return 0;
}
