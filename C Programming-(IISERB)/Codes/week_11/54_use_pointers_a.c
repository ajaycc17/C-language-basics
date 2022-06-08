#include<stdio.h>
void main()
{
  int i=1;
  int *p = &i;
  printf ("p initial addresss :%d\n",p);
  printf("%lu\n",(unsigned long int)p);
  printf("%lu\t%lu\n",(unsigned long int)(p+1),(unsigned long int)(p-1));
  printf("%lu\t%lu\n",(unsigned long int)p+1,(unsigned long int)p-1);
  p++;
  printf ("p address:%d\n",p);
  p--;
  printf ("p address:%d\n",p);
  ++p;
  printf ("p address:%d\n",p);
  --p;
  printf ("p address:%d\n",p);
}
