// Name: Morgan Perry
// W#:0487849
// Course: Introduction To C
// Assignment: Exercise 2
// Instructor: Nadia Gouda
// Date: January 24, 2024

// Program to calculate the area and circumference of a circle, and display Planck's constant

#include <stdio.h>

int main() 
{
    // Declare a floating-point variable to store the radius of the circle
    float radius;
    
    // Declare a constant for the value of PI
    const double PI = 3.14;
    
    // Declare variables to store the area and circumference of the circle
    float area, circumference;
    
    // Declare an integer variable to store the circumference as an integer (for truncation)
    int circumference_int;
    
    // Declare a constant for Planck's constant (though it's not used in the calculation)
    const double planck_constant = 6.62607015e-34;

    // Prompt the user to input the radius of the circle
    printf("Enter the Radius of the Circle: ");
    
    // Read the user input and store it in the variable 'radius'
    scanf("%f", &radius);

    // Calculate the area of the circle using the formula: area = PI * radius^2
    area = PI * radius * radius;
    
    // Calculate the circumference of the circle using the formula: circumference = 2 * PI * radius
    circumference = 2 * PI * radius;
    
    // Convert the floating-point circumference to an integer by truncating the decimal part
    circumference_int = (int)circumference;

    // Output the radius of the circle formatted to 2 decimal places
    printf("\nRadius of Circle: %.2f", radius);
    
    // Output the circumference of the circle as a float, formatted to 2 decimal places
    printf("\nCircumference of Circle (float): %.2f", circumference);
    
    // Output the circumference of the circle as an integer (truncated value)
    printf("\nCircumference of Circle (int): %d", circumference_int);
    
    // Output the value of Planck's constant in scientific notation
    printf("\nPlanck's Constant: %e\n", planck_constant);

    return 0; // Exit the program successfully
}
