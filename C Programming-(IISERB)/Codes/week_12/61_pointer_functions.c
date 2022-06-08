#include<stdio.h>
void incr(int *p);
void main()
{
  int i=5;
  incr(&i);
  printf("%d\n",i);
  incr(&i);
  printf("%d\n",i);
}
void incr(int *p)
{
  *p=*p+10;
}
