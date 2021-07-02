// 'r' --> read mode --> returns NULL if the file is not present
// 'rb' --> read binary mode --> returns NULL if the file is not present
// 'w' --> write mode --> creates a new file if the file is not present already and overwrites if already present
// 'wb' --> write binary mode --> creates a new file if the file is not present already and overwrites if already present
// 'a' --> append mode --> creates a new file if the file is not present already and appends new thing after existing content
// 'a+' --> both read and append mode
// 'r+' --> both read and write mode
// 'w+' --> both read and write mode

#include <stdio.h>
#include <string.h>

typedef struct student
{
    int rollNo;
    char name[40];
    char major[20];
} stud;

void main()
{
    // Reading and appending numerical values
    FILE *ptr;
    ptr = fopen("sampleNum.txt", "r");
    ptr = fopen("sampleNum.txt", "a+");

    int num1, num2;
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fprintf(ptr, "\nThe sum of two numbers is: %d\n", num1 + num2); //Output - 80
    fclose(ptr);
    printf("The sum of two numbers present in sampleNum.txt is: %d\n", num1 + num2); //Output - 80

    // Reading character by character of a txt file
    FILE *ptr1, *ptr2;
    ptr1 = fopen("sample.txt", "r");
    ptr2 = fopen("sampleGenerated.txt", "w");
    char c = fgetc(ptr1);

    while (c != EOF)
    {
        printf("%c", c);
        fputc(c, ptr2); // copying the content from sample.txt to sampleGenerated.txt
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    printf("\n");

    // Generating a .csv file with data of 3 students at a time using structure
    stud toppers[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the data for student %d\n", i + 1);
        printf("****************************\n\n");

        printf("Roll number: ");
        scanf("%d", &toppers[i].rollNo);

        printf("Name: ");
        fflush(stdin);
        gets(toppers[i].name);

        printf("Major in: ");
        fflush(stdin);
        gets(toppers[i].major);
    }

    FILE *ptr3;
    ptr3 = fopen("toppersData.csv", "a"); // we don't want to lose previous data so using append

    for (int i = 0; i < 3; i++)
    {
        fprintf(ptr3, "%d,%s,%s\n", toppers[i].rollNo, toppers[i].name, toppers[i].major);
    }
    fclose(ptr3);
}