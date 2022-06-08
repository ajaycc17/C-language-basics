#include<stdio.h>
#include<string.h>
void main()
{
  char str[]= "123456789";
  int rows=5;
  int i,j;
  int k=0;
  for(i=0;i<=5;i++)
    {
      for(j=0;j<=(10-2*i);j++)
	{
	  printf(" ");
	}
      printf("%c",str[k]);
      printf(" ");
      k++;
      if(k==2*i-1)break;
    }
  k--;
  for(j=0;j<i-1;j++)
    {
      k--;
      printf("%c",str[k]);
      printf(" ");
    }
  printf("\n");
}

	
