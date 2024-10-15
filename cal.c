#include <stdio.h>

int main() {
    // Declare and initialize two integer variables
    int a = 40;
    int b = 55;

    // Perform calculations
    int sum = a + b;           // Addition
    int difference = a - b;    // Subtraction
    int product = a * b;       // Multiplication
    float quotient = (float)a / b;  // Division (cast to float for accurate result)

    // Print results using %d for integers and %f for float
    printf("Sum: %d\n", sum);                   // Output: Sum: 95
    printf("Difference: %d\n", difference);     // Output: Difference: -15
    printf("Product: %d\n", product);           // Output: Product: 2200
    printf("Quotient: %.2f\n", quotient);       // Output: Quotient: 0.73

    return 0;
}
