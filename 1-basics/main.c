#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variables
    char personName[] = "Euan";
    int personAge = 20;

    printf("Hello, my name is %s!\n", personName); // %s is a placeholder for a string
    printf("I am %d years old.\n", personAge);     // %d is a placeholder for an integer

    // Data Types
    int myInteger = 172024;                  // Integer, 4 bytes
    float myFloat = 172024.0;                // Floating point, 4 bytes
    double myDouble = 172024.0;              // Double floating point, 8 bytes
    char myCharacter = 'e';                  // Character, 1 byte
    char myString[] = "Array of characters"; // Array of characters, 13 bytes
    printf("Integer: %d\n", myInteger);
    printf("Float: %f\n", myFloat);
    printf("Double: %lf\n", myDouble);
    printf("Character: %c\n", myCharacter);
    printf("String: %s\n", myString);

    return 0;
}