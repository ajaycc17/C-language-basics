#include <stdio.h>
#include <string.h>

void main()
{
    // Using string array
    char str[] = {'A', 'j', 'a', 'y', '\0'}; // Both are same
    char str2[] = "Alex";
    printf("The strings are: %s and %s\n", str, str2);

    // Using pointer --> read-only strings
    char *ptr = "Fredoka"; // Initializes a string ptr[] and passes its first cell's address to pointer ptr
    printf("The new string is: %s\n", ptr);
    for (int i = 0; i < 7; i++)
    {
        printf("%c", *(ptr + i));
    }

    // Take string inputs
    int length;
    char str3[20], str4[20];

    printf("\nEnter the string: ");
    // scanf("%s", str3); // doesn't accept spaces and terminates after first space
    gets(str3); // gets() is used to take string input similar to the above statement, it also accepts spaces

    printf("The string you entered is: %s\n", str3);
    puts(str3); // puts() is used for strings

    // Taking string input character by character
    char c;
    int i = 0;
    printf("Enter the string character by character: ");

    // 1st way
    // while (c != '\n')
    // {
    //     fflush(stdin);
    //     scanf("%c", &c);
    //     if (c != '\n')
    //         str4[i] = c;
    //     i++;
    // }
    // str4[i - 1] = '\0'; // Coz we didn't put character in one place when c = '\n' hence it will print garbage value there

    // 2nd way
    while (c != '\n')
    {
        fflush(stdin); // removes '\n' from buffer
        scanf("%c", &c);
        if (c == '\n')
            str4[i] = '\0';
        else
            str4[i] = c;
        i++;
    }
    printf("The string you entered characterby character is: %s\n", str4);

    // String functions --> strlen(string) and strcat(target, source)
    printf("The length of str2[](Alex) is: %d\n", strlen(str2));
    printf("The array after concatenation of ptr[](Fredoka) on str2[](Alex) is: %s\n", strcat(str2, ptr));

    // String comparison
    char *ptr2 = "Fredoska";
    char *ptr3 = "Fredo";
    printf("The comparison of ptr2[](Fredoska) on ptr[](Fredoka) is: %d\n", strcmp(ptr2, ptr));
    printf("The comparison of ptr2[](Fredo) on ptr[](Fredoka) is: %d\n", strcmp(ptr3, ptr)); //ASCII('\0') - ASCII('k') = 00-107
    // Comparison returns the difference of the first mismatching characters of pt2 and ptr here.
    // Here: ASCII(s) - ASCII(k) = postive (Hence returns 1)
    // If negative value comes, it returns -1.
    // If the strings are equal or same the it returns 0.
}