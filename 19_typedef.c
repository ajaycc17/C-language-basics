#include <stdio.h>
typedef int anonymous; // renaming fundamental int datatype

typedef struct employee
{
    int id;
    char name[40];
    char role[30];
} empl;

void main()
{
    empl *emplo1; // need not write struct employee everytime

    // assigining value to the id
    emplo1->id = 18018;
    printf("Demo of ID is: %d\n", emplo1->id);

    // Similarly we can rename fundamental datatypes as well
    anonymous number = 40;
    printf("My type of 'int' is: %d\n", number);
}