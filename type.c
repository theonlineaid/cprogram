#include <stdio.h>

int main() {
    char myChar = 'A';                  // Declare a character variable
    char myString[] = "Hello, World!"; // Declare a string (character array)
    int myNum = 42 * 4;                     // Declare an integer
    float myFloat = 3.14;               // Declare a float

    // Print the character, string, integer, and float
    printf("Character: %c\n", myChar);   // Output: Character: A
    printf("String: %s\n", myString);     // Output: String: Hello, World!
    printf("Integer: %d\n", myNum);       // Output: Integer: 42
    printf("Float: %f\n", myFloat);       // Output: Float: 3.140000

    return 0;
}
