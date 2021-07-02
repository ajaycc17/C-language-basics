#include <stdio.h>

struct classRoom
{
    int rollNo;
    char name[40];
};

// function definition
void showDetails(struct classRoom *studDemo)
{
    printf("The roll number of %s is: %d\n", studDemo->name, studDemo->rollNo);
}

void main()
{
    // struct classRoom student1;
    struct classRoom *student;

    // student = &student1;

    (*student).rollNo = 18018;
    printf("The roll no. is updated with pointer: %d\n", (*student).rollNo);
    // printf("The roll no. is updated with pointer: %d\n", student1.rollNo);

    // The above two lines can also be written as
    student->rollNo = 18018;
    printf("The roll no. is updated with pointer: %d\n", student->rollNo);

    // Structure in a function
    printf("Enter the name of the student: ");
    gets(student->name);
    showDetails(student);
    // We are printing the details in the function
}