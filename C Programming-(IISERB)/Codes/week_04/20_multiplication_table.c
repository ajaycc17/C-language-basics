#include<stdio.h>
void main()
{
  int i=1,j=1,sum;
  while(i<=10)
    {
      j=1;
      while(j<=10)
	{
	  sum=1;
	  sum=i*j;
	  printf("\t%d",sum);
	  j++;
	}
      printf("\n");
      i++;
    }
}
