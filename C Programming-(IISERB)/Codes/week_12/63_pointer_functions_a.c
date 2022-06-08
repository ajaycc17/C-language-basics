#include<stdio.h>
int *larger(int *x,int *y);
void main()
{
  int a=10,b=20;
  int *p=larger(&a,&b);
  printf("larger no between %d and %d is %d\n",a,b,*p);
}
int *larger(int *x,int *y)
{
  return *x>*y?x:y;
}
