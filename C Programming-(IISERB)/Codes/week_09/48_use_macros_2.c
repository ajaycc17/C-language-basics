#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define square(x) (x*x)
#define abs(x) (((x)<0)? -(x):(x))
#define cube(x) ((square(x))*x)
#define sind(x)  sin((3.14/180)*x)
#define max(a,b) ((a>b)? (a):(b))
#define min(a,b,c) a<b?(a<c?a:c):(b<c?b:c)
void main()
{
  int p,q,r,z;
  float t;
  printf("Enter the values for p,q,r:");
  scanf("%d",&p);
  scanf("%d",&q);
  scanf("%d",&r);
  z=abs(p);
  printf("The absolute value for the value of p is:%d\n",z);
  z=square(p);
  printf("The square of the value of p is:%d\n",z);
  z=cube(p);
  printf("The cube of the value of p is:%d\n",z);
  t=sind(p);
  printf("The sin of the value of p is:%f\n",t);
  z=max(p,q);
  printf("The maximum of p and q is:%d\n",z);
  z=min(p,q,r);
  printf("The min of p,q and r is:%d\n",z);
  
}
