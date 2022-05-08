// C program that adds all the array elements and prints the sum

#include <stdio.h>
int main() {
    int n, i;
    float num[10], sum = 0.0, avg;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    while (n > 10 || n < 5) {
        printf("Error! number should in range of (5 to 10).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}