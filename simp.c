#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input the principal amount, rate of interest, and time period
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Output the result
    printf("The simple interest is: %.2f\n", interest);

    return 0;
}

