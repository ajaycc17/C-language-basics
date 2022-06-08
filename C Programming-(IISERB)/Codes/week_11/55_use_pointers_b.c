#include<stdio.h>
void main()
{
  int i=1;
  int *p=&i;
  printf("%d-->%d\n",i,&i);
  printf("%d-->%d\n",*p,p);
  int j;
  j=*p;
  *p=2;
  printf("for i  :%d-->%d\n",i,&i);
  printf("for j  :%d-->%d\n",j,&j);
  short int i1=1;
  short int *p1=&i1;
  
  printf("%d-->%hd\n",i1,&i1);
  printf("%d-->%hd\n",*p1,p1);
  int j1;
  j1=*p1;
    *p1=2;
   printf("for i:%d-->%d\n",i1,&i1);
  printf("for j:%d-->%d\n",j1,&j1);
  long int i2 = 1;
  long int *p2=&i2;
   printf("%ld-->%hd\n",i2,&i2);
  printf("%ld-->%hd\n",*p2,p2);
  int j2;
  j2=*p2;
  *p2=2;
  printf("for i:%d-->%ld\n",i2,&i2);
   printf("for j:%d-->%ld\n",j2,&j2);
   return 0;
}
