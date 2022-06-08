#include<stdio.h>
#include<math.h>
#define pi 3.1416
#define max 180
void main()
{
  float angle=90;
  float angle_radian=(pi/max)*angle;
  float sin_angle=sin(angle_radian);
  float cos_angle=cos(angle_radian);
  float tan_angle=tan(angle_radian);


		      printf("sin(angle):%5.2f\n", sin_angle);
		      printf("cos(angle):%5.2f\n", cos_angle);
		      printf("tan(angle):%5.2f\n", tan_angle);
}
