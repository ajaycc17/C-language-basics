#include<stdio.h>
void main()
{
  int n, fact=1;
  printf("Enter the number of which you want to find the facorial:");
  scanf("%d",&n);

  for(int i=1;i<=n;++i)
    {
      fact*=i;
    }
  printf("The factorial of %d is: %d\n",n,fact);
}
