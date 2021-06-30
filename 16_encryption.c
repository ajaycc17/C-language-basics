#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function for Encryption
void encrypt(char *ptr)
{
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

// Function for decryption
void decrypt(char *ptr)
{
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

// ******************** Encrypting by random number **********************

// Function for Encryption
void encryptAdv(char *ptr, int a)
{
    while (*ptr != '\0')
    {
        *ptr = *ptr - a;
        ptr++;
    }
}

// Function for decryption
void decryptAdv(char *ptr, int a)
{
    while (*ptr != '\0')
    {
        *ptr = *ptr + a;
        ptr++;
    }
}

void main()
{
    char str[] = "This is an encrypted message!";

    // Encryption by adding 1 to the ASCII values
    encrypt(str);
    printf("The encrypted message is: %s\n", str);

    // Decryption by subtracting 1
    decrypt(str);
    printf("The decrypted message is: %s\n", str);

    // Encrypting by random number
    char str2[100];
    srand(time(0));
    int randomEncrypt = rand() % 32 + 1; // random number between 33 and 64 (including both)

    printf("Enter your message: ");
    gets(str2);

    encryptAdv(str2, randomEncrypt);
    printf("The encrypted message is: %s\n", str2);

    decryptAdv(str2, randomEncrypt);
    printf("The decrypted message is: %s\n", str2);
}