#include<stdio.h>
int multiplication(int m, int n);
float square_root(int y);
void main()
{
  int a,b,c,d;
  float z;
  a=3;
  b=2;
  c=multiplication(a,b);
  printf("multiplication(%d,%d):%d\n",a,b,c);

  printf("Square root's function:\n");
 repeat:
  {
  printf("Enter the number:");
  scanf("%d",&d);
  }
  if(d<0)
    {
    printf("The number you entered is negative\n");
    goto repeat;
    }
  z=square_root(d);
  printf("\nThe Square root of the number %d is:%f",d,z);
}

int multiplication(int m,int n)
{
  int c=m*n;
  return c;
}

float square_root(int y)
{
 float g=y/2;
while(fabs(g*g-y)>=0.0001)
  {
    if(g*g==y)
      break;
    else
    g=(g+(y/g))/2;
  }
 return g;
}
