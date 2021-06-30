#include <stdio.h>

void averageFunc(int a, int b, int c, float *d)
{
    *d = (float)(a + b + c) / 3; //type-casting as operations on (int vs int) gives int value
}

void main()
{
    // Average of 3 numbers
    int number1, number2, number3;
    printf("Enter the 3 numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    printf("The average of 3 numbers are: %f\n", (float)(number1 + number2 + number3) / 3); //type-casting

    // Using function by reference
    float average;
    averageFunc(number1, number2, number3, &average);
    printf("The average of the three numbers are: %f\n", average);
}