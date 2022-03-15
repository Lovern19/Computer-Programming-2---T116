/** C program that identify the smallest and largest
 * number from the user **/

#include<stdio.h>
int main()

{
    int i, n, lar,sm, elem;
    printf ("Enter how many numbers you desired to identify");
    scanf ("%d", &elem);
    printf ("Enter first number");
    scanf ("%d", &n);
    lar = n;
    sm=n;
    for (i=1; i<= elem -1 ; i++)
    {
        printf ("Enter another number");
        scanf ("%d",&n);
        if (n>lar)
        lar=n;
        if (n<sm)
        sm=n;
    }
    printf ("The largest number is %d", lar);
    printf ("The smallest number is %d", sm);
    return 0;
}