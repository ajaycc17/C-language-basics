#include<stdio.h>
void main()
{
  float n=1,N;
  printf("Enter the value for N:");
  scanf("%f",&N);
  float sum=0;
  while(n<=N)
    {
      sum=sum+(1/n);
      n++;
    }
  printf("The sum of all the required natural numbers are:%.6f\n",sum);
}
