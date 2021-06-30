#include <stdio.h>
int myStrlen(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

void main()
{
    char *str = "Alex ";

    // Own implementation of strlen()
    int count = -1; // Coz in loop we are also counting '\0'. Otherwise use if-else inside loop
    int i = 0;
    char c = 'a';
    while (c != '\0')
    {
        c = *(str + i);
        count += 1;
        i++;
    }
    printf("The length of the string is: %d\n", count);

    // Creating a function named myStrlen()
    printf("The length of the string is: %d\n", myStrlen(str));
}