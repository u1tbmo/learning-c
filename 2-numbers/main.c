#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Numbers
    printf("Addition: %d\n", 1 + 15);
    printf("Substraction: %d\n", 1 - 15);
    printf("Multiplication: %d\n", 1 * 15);
    printf("Multiplication with Float: %f\n", 1.0 * 15);
    printf("Division: %d\n", 1 / 15);
    printf("Division with Float: %f\n", 1.0 / 15);

    // Math Functions
    printf("Absolute Value: %d\n", abs(-15));
    printf("Power: %f\n", pow(2, 3));
    printf("Square Root: %f\n", sqrt(16));
    printf("Ceiling: %f\n", ceil(15.1));
    printf("Floor: %f\n", floor(15.9));

    return 0;
}