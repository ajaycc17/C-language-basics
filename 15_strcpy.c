#include <stdio.h>
// void slice(char str[], int a, int b)
// {
//     int i = 0;
//     while (a + i < b)
//     {
//         str[i] = str[a + i];
//         i++;
//     }
//     str[i] = '\0';
// }

// Another way for function
void slice(char *str, int a, int b) // All arrays including int and float arrays work like this
{
    int i = 0;
    while (a + i < b)
    {
        *(str + i) = *(str + (a + i));
        i++;
    }
    *(str + i) = '\0';
}

void main()
{
    char str[] = "Haridwar";

    // Program to slice the original string into a certain part
    slice(str, 2, 7);
    printf("The string after slicing is: %s\n", str);
}