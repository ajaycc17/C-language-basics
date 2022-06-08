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
    int number, factorial = 1;

    // For factorial of a number using loop
    printf("Enter the number: ");
    scanf("%d", &number);
    
    for (int i = 1; i <= number; i++)
        factorial *= i;
    printf("The factorial of %d is: %d\n", number, factorial);

    // Factorial using recursion
    factorial = factorialFunc(number); //function call
    printf("The factorial (using recursion) of %d is: %d", number, factorial);
}
