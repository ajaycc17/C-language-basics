#include <stdio.h>
void main()
{
    float celsius, fahrenheit;
    // For Celsius to Fahrenheit
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);
    printf("Temperature in fahrenheit is: %f\n", celsius * 9 / 5 + 32);

    // For Fahrenheit to Celsius
    printf("\nEnter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("Temperature in celsius is: %f\n", (fahrenheit - 32) * 5 / 9);
}