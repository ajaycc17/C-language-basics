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
  float x3;
	printf("Insert value for a:\n");
	scanf("%f",&a);
	printf("Insert value for b:\n");
	scanf("%f",&b);
	printf("Insert value for c:\n");
	scanf("%f",&c);


  float d=b*b-4*a*c;
  x1=(-b+sqrt(d))/(2*a);
  x2=(-b-sqrt(d))/(2*a);
    x3=(-c/b);

  if(a==0&&b==0)
    printf("No Solution!!");
 else
  if(a==0)
    printf("Only one root: %5.2f",x3);
  else
    if(d<0)
    printf("Error!!The roots are imaginary");

  else
    {
      printf("The two roots are:");
	printf("%5.2f,%5.2f\n",x1,x2);
    }
  return (0);
}
