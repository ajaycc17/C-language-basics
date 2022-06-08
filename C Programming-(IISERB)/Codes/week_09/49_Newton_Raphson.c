#include<stdio.h>
#include<math.h>
#define dfg (2*g)
#define fg (g*g-x)
#define e 2.7182
int main()
{
  int i=1;
  float x;
  float g;
  printf("Enter the Number(x):");
  scanf("%f",&x);

if(x<=0)
printf("x is not a positive number");

else
{
  g=x/2;
  while(fabsf(g*g-x)>=(1*e-6))
  {
    if(g*g==x)
      break;
    else
      g=g-(fg/dfg);
    printf("Value of g at loop %d is:%f\n",i,g);
    ++i;
    if(i==20)
      break;
  }
 printf("The Square root of %f is:%7.4f\n",x,g);
}
return (0);
}
