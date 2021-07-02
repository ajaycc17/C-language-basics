#include <stdio.h>
#include <string.h>

// defining a structure
struct student
{
    int rollno;
    char name[40];
    char major[20];
} iiserb[2]; // either this ways declare a variable of type struct student or the way below

void main()
{
    // struct student iiserb[2]; //declaring a variable of type struct student
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the roll number for student %d: ", i + 1);
        scanf("%d", &iiserb[i].rollno);

        printf("Enter the name of student %d: ", i + 1);
        fflush(stdin); //flushes previous input (here \n) from standard input
        gets(iiserb[i].name);

        printf("Enter the major of student %d: ", i + 1);
        fflush(stdin);
        gets(iiserb[i].major);
    }

    // Printing the details
    for (int i = 0; i < 2; i++)
    {
        printf("\nThe roll number for student %d is: %d\n", i + 1, iiserb[i].rollno);
        printf("The name of student %d is: %s\n", i + 1, iiserb[i].name);
        printf("The major of student %d is: %s\n", i + 1, iiserb[i].major);
    }

    // A structure datatype can also be defined in this way
    struct student iitk = {170177, "Akhil", "Mathematics"};
    printf("The major of %s is %s and his roll number is %d\n", iitk.name, iitk.major, iitk.rollno);
}