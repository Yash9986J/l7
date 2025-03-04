#include <stdio.h>

int main() {
    int n, num;

    // Asking user how many numbers to check
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Loop through the number of elements
    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);

        // Check if the number is even or odd
        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
    }

    return 0;
}

