#include <stdio.h>
void main()
{
    int number;

    // Divisibility by 97
    printf("Enter a number to check its divisibility by 97: ");
    scanf("%d", &number);
    if (number % 97 == 0)
        printf("%d is divisible by 97\n", number);
    else
        printf("%d is not divisible by 97\n", number);

    // Check for Even and Odd numbers
    if (number % 2 == 0)
        printf("%d is an even number\n", number);
    else
        printf("%d is an odd number\n", number);

    // One line solution
    printf(number % 2 == 0 ? "%d is an even number", number : "%d is an odd number", number);
}