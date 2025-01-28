// Name: Morgan Perry
// W#:
// Course: Introduction To C
// Assignment: Exercise 2
// Instructor: Nadia Gouda
// Date: January 27, 2024

#include <stdio.h>

int main()
{
    // Declaring and initializing two float variables
    float One = 3.25;
    float Two = 57.525;
    
    // Printing the values of One and Two using %f format specifier
    printf("result: %f\n", One);
    printf("result: %f\n", Two);

    // Performing arithmetic operations
    float additionResult = One + Two;       
    float subtractResult = One - Two;      
    float multiplyResult = One * Two;       
    float divideResult = One / Two;        

    // Printing the results of the arithmetic operations
    printf("additionResault: %f\n", additionResult);
    printf("subtractResault: %f\n", subtractResult);
    printf("multiplyResault: %f\n", multiplyResult);
    printf("divideResult: %f\n", divideResult);

    // Declaring two integer variables
    int one = 16;
    int two = 5;
    
    // Performing modulus operation (remainder of division)
    int Modulus = one % two;
    
    // Printing the result of the modulus operation
    printf("Int1 %% Int2 is %d\n", Modulus);

    // Declaring a char variable and assigning it a character 'A'
    char letter = 'A';
    
    // Printing the character and its ASCII value using %c and %d format specifiers
    printf("Character: %c\n", letter);
    printf("ASCII value: %d\n", letter);

    // Declaring integer and float variables to store user input
    int integerInput;
    float floatInput;

    // Prompting the user for an integer input and reading the input
    printf("Enter an integer: ");
    scanf("%d", &integerInput);

    // Prompting the user for a float input and reading the input
    printf("Enter a float: ");
    scanf("%f", &floatInput);

    // Printing the values entered by the user
    printf("You entered integer: %d\n", integerInput);
    printf("You entered float: %.2f\n", floatInput);

    // Declaring an integer variable to demonstrate increment operators
    int number = 5;

    // Pre-increment: increments the value before printing
    printf("Before pre-increment: %d\n", number);
    printf("Pre-increment: %d\n", ++number);

    // Post-increment: prints the value before incrementing
    printf("Before post-increment: %d\n", number);
    printf("Post-increment: %d\n", number++);

    // After the post-increment, printing the updated value of the number
    printf("After post-increment: %d\n", number);

    return 0; // End of the main function
}
