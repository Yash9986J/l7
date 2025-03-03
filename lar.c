#include <stdio.h>

int main() {
    int n, i, num, largest;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the user wants to enter any numbers
    if (n <= 0) {
        printf("Please enter a positive number of elements.\n");
        return 1;
    }

    // Read the first number and consider it as the largest initially
    printf("Enter number 1: ");
    scanf("%d", &largest);

    // Loop to read the rest of the numbers
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Update largest if the current number is greater
        if (num > largest) {
            largest = num;
        }
    }

    // Output the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}

