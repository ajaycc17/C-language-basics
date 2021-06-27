#include <stdio.h>
#include <ctype.h>
void main()
{
    char ch;

    // Decide upper or lowercase characters
    printf("Enter the character: ");
    scanf("%c", &ch);
    if (isalpha(ch)) // Checking for alphabets
    {
        if (ch >= 65 && ch <= 90)
            printf("%c is an uppercase character\n", ch);

        else
            printf("%c is a lowercase character\n", ch);
    }
    else
    {
        printf("%c is not an alphabet, please enter an alphabet!\n", ch);
    }

    // Greatest of 4 numbers
    int a, b, c, d;

    printf("Enter any 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
                printf("%d is the greatest integer", a);
            else
                printf("%d is the greatest integer", d);
        }
        else
        {
            if (c > d)
                printf("%d is the greatest integer", c);
            else
                printf("%d is the greatest integer", d);
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
                printf("%d is the greatest integer", b);
            else
                printf("%d is the greatest integer", d);
        }
        else
        {
            if (c > d)
                printf("%d is the greatest integer", c);
            else
                printf("%d is the greatest integer", d);
        }
    }
}