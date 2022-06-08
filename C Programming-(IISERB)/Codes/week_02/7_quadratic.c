#include<stdio.h>
#include<math.h>
int main()
{
  float a;
  float b;
  float x;
  float c;
  float x1;
  float x2;
	printf("put value for a:\n");
	scanf("%f",&a);
	printf("put value for b:\n");
	scanf("%f",&b);
	printf("put value for c:\n");
	scanf("%f",&c);
	

  float d=b*b-4*a*c;
  x1=(-b+sqrt(d))/(2*a);
  x2=(-b-sqrt(d))/(2*a);

  if(d<0)
    printf("Error!!The roots are imaginary");
  
  else
    {
      printf("The roots are:");
	printf("%5.2f,%5.2f\n",x1,x2);
    }
  return (0);
}
