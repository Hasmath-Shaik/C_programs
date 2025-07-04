#include <stdio.h>

int main() {
    int num1, num2, sum; // Declare integer variables

    printf("Enter the first integer: ");
    scanf("%d", &num1); // Read the first integer

    printf("Enter the second integer: ");
    scanf("%d", &num2); // Read the second integer

    // Calculate the sum
    sum = num1 + num2;

    // Display the sum
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0; 
}