#include<stdio.h>
#define square(x) (x*x)
void main()
{
  int z,p;
  printf("Enter a value:");
  scanf("%d",&p);
  z=square(p);
  printf("\nThe result for square(p) is:%d\n",z);
    z=square(2);
  printf("\nThe result for square(2) is:%d\n",z);
    z=square(2+3);
  printf("\nThe result for square(2+3) is:%d\n",z);
}
