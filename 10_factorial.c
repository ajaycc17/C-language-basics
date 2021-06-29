#include <stdio.h>
int factorialFunc(int number); //function prototype

// Definition of a function
int factorialFunc(int a)
{
    if (a == 0 || a == 1)
        return 1;
    else
        return a * factorialFunc(a - 1);
}

void main()
{
    int number, factorial;

    // Factorial using recursion
    printf("Enter a number: ");
    scanf("%d", &number);
    factorial = factorialFunc(number); //function call
    printf("The factorial of %d is %d", number, factorial);
}