#include<stdio.h>

int main()
{
    
    int n,sum=0,c,value;

    printf("Enter the number of integers you want to add:  ");
    scanf("%d", &n);

    printf("Enter %d integers\n\n",n);
    for(c = 1; c <= n; c++)
    {
    printf("enter your value  value \n");
        scanf("%d", &value);
        
        sum += value;
    }

    printf("sum of entered numbers  = %d", sum);
    
    return 0;
}
