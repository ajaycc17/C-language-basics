#include <stdio.h>
void main()
{
    // Check for leap year
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 100 == 0) // For a year ending with '00' every 400th year is a leap year
    {
        if (year % 400 == 0)
            printf("%d is a leap year", year);

        else
            printf("%d is not a leap year", year);
    }

    else if (year % 4 == 0) //Else every 4th year is a leap year
        printf("%d is a leap year", year);

    else
        printf("%d is not a leap year", year);
}