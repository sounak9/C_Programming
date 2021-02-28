#include<stdio.h> 
main()
{
int r, star, space, n; 
printf("\n\tEnter a number : "); 
scanf("%d", &n);
for(r = 1 ; r <= n ; r++)
{
printf("\n\t");
for(space = 1 ; space <= n-r ; space++) 
printf(" ");
for(star = 1 ; star <=r ; star++) 
printf("%d",star );    
for(star = r-1 ; star >=1 ; star--) 
printf("%d",star );
}
for(r = n-1 ; r >= 1 ; r--)
{
printf("\n\t");          
for(space = 1 ; space <= n-r ; space++) 
printf(" ");
for(star = 1 ; star <=r ; star++) 
printf("%d",star);          
for(star = r-1 ; star >=1 ; star--) 
printf("%d",star); 
}
}
