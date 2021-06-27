#include <stdio.h>
void main()
{
    int number, factorial = 1;

    // For factorial of a number
    printf("Enter the number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
        factorial *= i;
    printf("The factorial of %d is: %d\n", number, factorial);
}
