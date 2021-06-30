#include <stdio.h>
void funcValue(int a, int b);
void funcReference(int *a, int *b);

void main()
{
    int number1, number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    printf("The numbers before any function call are: %d and %d\n\n", number1, number2);

    // function call by value
    funcValue(number1, number2);
    printf("The value of numbers after function call by value are: %d and %d\n", number1, number2);

    // function call by reference
    funcReference(&number1, &number2);
    printf("The value of numbers after function call by reference are: %d and %d\n", number1, number2);
}

void funcValue(int x, int y)
{
    x = 245; // changing values here
    y = 68;
}

void funcReference(int *x, int *y)
{
    *x = 1200; // changing values here
    *y = 100;
}