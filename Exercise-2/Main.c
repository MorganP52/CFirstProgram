// Name: Morgan Perry
// W#:
// Course: Introduction To C
// Assignment: Exercise 2
// Instructor: Nadia Gouda
// Date: January 14, 2024

#include <stdio.h>

int main()

{
    float radius;
    const double PI = 3.14;
    float area, circumference;
    int circumference_int;
    const double planck_constant = 6.62607015e-34;

    printf("Enter the Radius of the Circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    circumference_int = (int)circumference;

    printf("\nRadius of Circle: %.2f", radius);
    printf("\nCircumference of Circle (float): %.2f", circumference);
    printf("\nCircumference of Circle (int): %d", circumference_int);
    printf("\nPlanck's Constant: %e\n", planck_constant);

    return 0;
}