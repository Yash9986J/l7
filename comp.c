#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compoundInterest;

    // Input the principal amount, rate of interest, and time period
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate the compound interest
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Output the result
    printf("The compound interest is: %.2f\n", compoundInterest);
    printf("The total amount after compound interest is: %.2f\n", amount);

    return 0;
}

