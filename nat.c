#include <stdio.h>

int main() {
    int n, sum;

    // Ask the user to input the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the number is positive
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the sum of natural numbers from 1 to n using the formula n*(n+1)/2
    sum = n * (n + 1) / 2;

    // Output the result
    printf("The sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}

