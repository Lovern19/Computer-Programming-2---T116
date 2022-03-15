/*
C program accepts two integers to calculate as X^Y (X to the power of Y)
*/
 
#include <stdio.h>
#include <math.h>
 
int main(void)
{
    int x,y;
    int result;
 
    printf("Enter the value of base: ");
    scanf("%d",&x);
 
    printf("Enter the value of power: ");
    scanf("%d",&y);
     
    result =pow((double)x,y);
 
    printf("%d to the power of %d is= %d", x,y, result);
    
    getch();
    return 0;
}