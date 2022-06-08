#include<stdio.h>
void main()
{
  int i;
  int x[3]={1,2,3};
  printf("%d\n",x);
  for (i=0;i<=3;i++)
    printf("%d-->%d\n",x[i],&x[i]);
  int *p1=&x[0];
  for (i=0;i<3;i++)
    printf("%d-->%d\n",x[i],&x[i]);
  int *p=&x[0];
  for (i=0;i<3;i++)
    {
      printf("%d-->%d\n",*p,p);
      p++;
    }
}
