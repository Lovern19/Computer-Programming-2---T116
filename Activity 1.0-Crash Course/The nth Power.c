#include <stdio.h>
int main()

// C program that accepts two positive integers
// The base represented as X and the exponent represented as Y
// X may be greater or lesses than 0, but should not be equal to 0

{
    int base, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %.0Lf", result);
    return 0;
}