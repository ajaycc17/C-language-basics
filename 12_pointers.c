#include <stdio.h>
void main()
{
    int number = 45;
    int *point;

    point = &number;
    printf("&number = %u\n", &number); //address of the variable
    printf("number = %d\n", number);   //value stored in the variable

    // printf("*number = %u\n", *number);     // gives error coz it is not a pointer

    printf("point = %u\n", point);   //address or value stored by the pointer or address of the variable it is pointing to
    printf("&point = %u\n", &point); //address of the pointer itself
    printf("*point = %d\n", *point); //value of the variable pointed at by pointer

    point = 20; // Like any variable pointers can also store values but it will throw a warning. You cannot do *p now to get value at 20 (which is an invalid address), this way you can manually enter a valid address btw but not efficient and stable
    printf("point = %d\n", point);

    // printf("*point = %d\n", *point);     // Here program crashes coz it is trying to fetch value from an invalid address.

    int normalVar = &number;
    printf("normalVar = %u\n", normalVar); // normal variables can also strore addresses but won't be able to refer to the address' value by *normalVar like shown below

    // printf("*normalVar = %d\n", *normalVar);     // It throws an error coz it is not a pointer



    // Double pointer
    int demoVal = 45;
    int *point1 = &demoVal;
    int **point2 = &point1;

    printf("\ndemoVal = %d\n", demoVal);  //value 45
    printf("&demoVal = %u\n", &demoVal);    //address of demoVal
    printf("*point1 = %d\n", *point1);  //value at address of demoVal = value of demoVal
    printf("*point2 = %d\n", *point2);  // value at address of point1 = address of demoVal
    printf("**point2 = %d\n", **point2);    // value at address present in address assigned to point2 = value of demoVal
}