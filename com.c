#include <stdio.h>

// Define a structure to represent a complex number
struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex num1, num2, sum;

    // Input for the first complex number
    printf("Enter the real part of the first complex number: ");
    scanf("%f", &num1.real);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%f", &num1.imag);

    // Input for the second complex number
    printf("Enter the real part of the second complex number: ");
    scanf("%f", &num2.real);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%f", &num2.imag);

    // Add the complex numbers
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    // Output the result
    printf("The sum of the two complex numbers is: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}

