#include<stdio.h>
#include<stdbool.h>
void main()
{
  int i;
  bool b1=true;
  bool b2=false;
  printf("%d\n",b1);
  b1=20;
  i=b1+90;
  printf("\n When b1 is positive i=%d",i);
   b1=-15;
  i=b1+90;
  printf("\n When b1 is negative i=%d",i);
 b1=0;
  i=b1+90;
  printf("\n When b1 is 0  i=%d",i);
  int a=b1&b2;
  printf("\nBitwise operators\n&\t|\t^");
  int b=b1|b2;
  int c=b1^b2;
  printf("\n%d\t%d\t%d",a,b,c);
  int x=5;
  int y=6;
  int l=x&y;
  int m=x|y;
  int n=x^y;
   printf("\nFor integers 5 and 6\n%d\t%d\t%d",l,m,n);
}
  
  
