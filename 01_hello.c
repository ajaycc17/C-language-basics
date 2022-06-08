#include <stdio.h>
#include <math.h>
#define PI 3.14159
void main()
{
    int length, breadth, radius_circle, radius_cyl, height;
    // For area of rectangle
    printf("Enter length and breadth respectively: ");
    scanf("%d %d", &length, &breadth);
    printf("Area of the rectangle is: %d\n", length * breadth);

    // For area of circle
    printf("Enter the radius for circle: ");
    scanf("%d", &radius_circle);
    printf("The area of the circle is: %f\n", PI * pow(radius_circle, 2)); // "%f" since PI is a float value

    // Volume of a cylinder
    printf("Enter the radius and height of the cylinder: ");
    scanf("%d %d", &radius_cyl, &height);
    printf("The volume of the cylinder is: %f\n", PI * pow(radius_cyl, 2) * height); // "%f" since PI is a float value
}