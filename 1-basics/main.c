#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Comments
    // This is a single line comment
    /*
    This is a multi-line comment
    Line 1
    Line 2
    */

    // Variables
    // Declaration and Initialization
    char personName[] = "Euan"; // Array of Characters
    int personAge = 20;         // Integer

    printf("Hello, my name is %s!\n", personName); // %s is a placeholder for a string
    printf("I am %d years old.\n", personAge);     // %d is a placeholder for an integer

    printf("\nData Types\n");

    // Data Types
    int myInteger = 172024;                  // Integer, 4 bytes, %d
    char myCharacter = 'e';                  // Character, 1 byte, %c
    char myString[] = "Array of characters"; // Array of characters, 1 byte per character, %s

    printf("Integer: %d\n", myInteger);
    printf("Character: %c\n", myCharacter);
    printf("String: %s\n", myString);

    float myFloat = 3.141592;            // Float, 4 Bytes, 6 - 7 decimal digits, %f
    double myDouble = 3.141592653589793; // Double, 8 Bytes, 15 - 16 decimal digits, %lf

    printf("Float: %f\n", myFloat);
    printf("Double: %lf\n", myDouble);

    bool myBoolean = true; // Boolean, 1 Byte, %d (1 for true, 0 for false)

    printf("Boolean: %d\n", myBoolean);

    // Signed and Unsigned Data Types

    printf("\nSigned and Unsigned Data Types\n");

    char signedChar = 127;            // Signed Char, 1 Byte, (-128 to 127), %c
    unsigned char unsignedChar = 255; // Unsigned Char, 1 Byte, (0 to 255), %c

    printf("Signed Char: %c\n", signedChar);
    printf("Unsigned Char: %c\n", unsignedChar);

    short int signedShortInt = 32767;            // Signed Short Int, 2 Bytes, (-32,768 to 32,767), %d
    unsigned short int unsignedShortInt = 65535; // Unsigned Short Int, 2 Bytes, (0 to 65,535), %d

    printf("Signed Short Int: %d\n", signedShortInt);
    printf("Unsigned Short Int: %d\n", unsignedShortInt);

    int signedInt = 2147483647;            // Signed (Long) Int, 4 Bytes, (-2,147,483,648 to 2,147,483,647), %d
    unsigned int unsignedInt = 4294967295; // Unsigned (Long) Int, 4 Bytes, (0 to 4,294,967,295), %u

    printf("Signed Int: %d\n", signedInt);
    printf("Unsigned Int: %u\n", unsignedInt);

    long long int signedLongInt = 9223372036854775807;              // Signed Long Long Int, 8 Bytes, (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807), %lld
    unsigned long long int unsignedLongInt = 18446744073709551615U; // Unsigned Long Long Int, 8 Bytes, (0 to 18,446,744,073,709,551,615), %llu

    printf("Signed Long Long Int: %lld\n", signedLongInt);
    printf("Unsigned Long Long Int: %llu\n", unsignedLongInt);

    return 0;
}