#include<stdio.h>
#include<math.h>
int main()
{
  float x;
  float g;
  printf("Enter the Number(x):");
  scanf("%f",&x);

if(x<=0)
printf("x is not a positive number");

else
{
  g=x/2;
while(fabsf(g*g-x)>=0.0001)
  {
    if(g*g==x)
      break;
    else
    g=(g+(x/g))/2;
  }
 printf("The Square root of %f is:%7.4f",x,g);
}
return (0);
}
