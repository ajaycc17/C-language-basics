#include<stdio.h>
#include<math.h>
#define pi  3.1416
#define max 180

void main()
{
    int angle=0;
    printf("angle sin(angle)\n");
    while (angle<=max)
    {
        printf("%5d %7.4f\n",angle,sin((pi/max)*angle));
        angle=angle+10;
    }
}
