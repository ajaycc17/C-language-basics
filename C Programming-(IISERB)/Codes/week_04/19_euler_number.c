#include<stdio.h>

void main()
{
  int n;
  float e=1,fact=1,i=1;
  printf("Enter the value for n:");
  scanf("%d",&n);
  while(i<=n)
    {
      fact*=i;
      e=e+(1/fact);
      i++;
    }
  printf("The euler number is:%.12f",e);
}


