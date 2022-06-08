#include<stdio.h>
#include<math.h>
#define pi 3.1416
#define max 180

void main()
{
  float i=0,c,angle_radian;
  int d;
  while(i<=360)
    {
      angle_radian=(pi/max)*i;
      c=sin(angle_radian);
      c=c+1;
      c=c*10;
      c=(int)c;
      for(int j=0;j<c;j++)
	{
	  printf(" ");
	}
      printf("*\n");
      i=i+15;
    }
}

