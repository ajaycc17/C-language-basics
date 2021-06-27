#include <stdio.h>
void main()
{
    int number;

    // Multiplication table
    printf("Enter the number: ");
    scanf("%d", &number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    // Multiplication table --> Reverse order
    printf("In reverse order:\n");
    for (int i = 10; i; i--)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}