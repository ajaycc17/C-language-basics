#include<stdio.h>
void main()
{
  int x;
  int i;
  int p=0;
  printf("Enter the value for x:");
  scanf("%d",&x);

  if(x<=0)
    printf("x is not a positive number");
  for(i=0;i<x;++i)
    {
      if(i*i==x)
        {
	  printf("%d is a perfect square and square root is %d\n",x,i);
	  p=1;
           break;
        }
    }
  if(p==0)
    printf("%d is not a perfect square",x);
  
}
