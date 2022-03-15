 #include <stdio.h>
  int main() {
        int n, data[100], i, j, temp;

        /* get the number of entries */
        printf("Enter how many numbers you want to sort in descending order:");
        scanf("%d", &n);

        /* get the input data */
        for (i = 0; i < n; i++)
                scanf("%d", &data[i]);


        /* data in descending order */
        printf("\nDescending Order:\n");
        for (i = n-1; i >= 0; i--)
                printf("%d\n", data[i]);

        return 0;
  }