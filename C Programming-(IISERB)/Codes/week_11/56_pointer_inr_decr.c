#include<stdio.h>
void main ()
{
  int xx [3][3]={1,2,3,4,5,6,7,8,9};
  printf("%d\n",xx);
  printf("%d\n",xx[0]);
  printf("%d\n",xx[1]);
  printf("%d\n",xx[2]);
  int i,j,*pp[3];
  for(i=0;i<3;i++)
    {
      for (j=0;j<3;j++)
	printf("%d-->%d\t",xx[i][j],&xx[i][j]);
      printf("\n");
    }
  for (i=0;i<3;i++)
    pp[i]=&xx[i];
  for (i=0;i<3;i++)
    {
      for (j=0;j<3;j++)
	printf("%d-->%d\t",*pp[i]+j,pp[i]+j);
      printf("\n");
    }
  int *p=&xx[0][0];
  for(i=0;i<9;i++)
    {
      printf("%d-->%d\t",*p,p);
      printf("\n");
      p++;
    }
}
