/** C program that accepts N number and
 * terminates when the user input zero **/

#include <stdio.h>
#include <conio.h>

int main(void) {

    int count;
    float average, number;
    
    count = 0;

    printf("Calculate sum and average (0 to quit)\n");

    while (number!=0) {
        scanf("%f", &number);
        
        count = count + 1;
    }
    average = count;
   
    printf(" Average=%f", average);
}