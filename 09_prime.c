#include <stdio.h>

// Custom function
int checkPrime(int number)
{
    int halfNum = number / 2;
    for (int i = 2; i <= halfNum; i++)
    {
        if (number % i == 0)
            return 1;
    }
    return 0;
}

void main()
{
    int checkPrime(int number); // Function declaration
    int number, check = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    // Check for Prime numbers --> Using function call
    check = checkPrime(number);

    if (check == 0)
        printf("Using function: %d is a prime number\n", number);
    else
        printf("Using function: %d is not a prime number\n", number);

    // Check for Prime numbers --> Using loop only
    int halfNum = number / 2;

    for (int i = 2; i <= halfNum; i++)
    {
        if (number % i == 0)
        {
            check = 1;
            break;
        }
    }

    if (check == 0)
        printf("Using loop: %d is a prime number\n", number);
    else
        printf("Using loop: %d is not a prime number\n", number);
}