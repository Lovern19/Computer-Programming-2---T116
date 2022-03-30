#include<stdio.h>
#include<conio.h>

// C program that accept an integer greater tnan 0 (N) 
// and print out N lines of asterisk into a pattern

int main()
{
int n, s, i, j;
printf("Enter number of rows: ");
scanf("%d",&n);
for(i = 0; i <= n; i++)
{
for(s = n; s > i; s--)
printf(" ");
for(j=0; j<i; j++)
printf("* ");
printf("\n");
}
for(i = 1; i < n; i++)

return 0;
}