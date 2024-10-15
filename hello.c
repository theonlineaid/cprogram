#include <cs50.h>
#include <stdio.h>

int main()
{

    int myNum = 15;            // Integer (whole number)
    float myFloatNum = 5.99;    // Floating point number
    char myLetter = 'D';        // Character
    // string user = "Name of user";
    char user[] = "Name of user"; 

    // Print variables
    printf("Integer: %d\n", myNum);        // %d for integer
    printf("Float: %.2f\n", myFloatNum);   // %.2f for float (2 decimal places)
    printf("Character: %c\n", myLetter);   // %c for character


    string name = get_string("What's your name? ");
    printf("Hello, %s\n", name);
    int x = 5;
    int y = 2;
    float sum = (float) 5 / 2;
    printf("%.1f\n", sum);
    
    printf("User: %s\n", user);

    return 0;
}