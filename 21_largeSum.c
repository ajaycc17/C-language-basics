// header files
#include <stdio.h>
#include <stdlib.h>

// function to calculate sum
void findSum(char *str1, char *str2, int len1, int len2)
{
    int carry = 0, sum = 0, len = len1 + len2, count = 0, compare = 0;
    char str[len];

    // if both strings of same size
    if (len1 == len2)
        compare = -1;

    // loop to calculate sum
    for (int i = len1 - 1, j = len2 - 1, k = 0; i >= compare; i--, j--, k++)
    {
        count++;
        if (i < 0)
        {
            str[k] = (char)(carry + '0');
            continue;
        }
        if (j < 0)
        {
            sum = (int)(str1[i] - '0') + carry;
            str[k] = (char)(sum % 10 + '0');
            carry = sum / 10;
            continue;
        }
        sum = (int)(str1[i] - '0') + (int)(str2[j] - '0') + carry;
        str[k] = (char)(sum % 10 + '0');
        carry = sum / 10;
    }
    // print the string of output
    for (int i = (count - 1); i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

// main function
void main()
{
    char num1[] = "123456222222222222222222222222222";
    char num2[] = "913245151654651535168151231216215";

    // length of strings
    int len1 = sizeof(num1) / sizeof(char) - 1;
    int len2 = sizeof(num2) / sizeof(char) - 1;

    // compare the length of the strings
    if (len1 >= len2)
        findSum(num1, num2, len1, len2);
    else
        findSum(num2, num1, len2, len1);
}
