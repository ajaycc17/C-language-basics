#include <stdio.h>
void main()
{
    // Average of 3 numbers
    float number1, number2, number3;
    printf("Enter the 3 numbers: ");
    scanf("%f %f %f", &number1, &number2, &number3);
    printf("The average of 3 numbers are: %f", (number1 + number2 + number3) / 3);
}