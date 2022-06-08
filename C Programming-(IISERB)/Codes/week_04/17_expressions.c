#include<stdio.h>
void main()
{
  int x,y,z,p,q,m,n;
 float result;
  printf("Expression 1\n");
  printf("Provide input for x:");
  scanf("%d",&x);
    printf("Provide input for y:");
  scanf("%d",&y);
    printf("Provide input for z:");
  scanf("%d",&z);

  result=(x-y/5+z)%8+25;
  printf("%f\n",result);

    printf("Expression 2\n");
  printf("Provide input for x:");
  scanf("%d",&x);
    printf("Provide input for y:");
  scanf("%d",&y);
    printf("Provide input for p:");
  scanf("%d",&p);

      printf("Provide input for q:");
  scanf("%d",&q);
  
  result=(x-y)*p+q;
  printf("%f\n",result);

  
      printf("Expression 3\n");
  printf("Provide input for x:");
  scanf("%d",&x);
    printf("Provide input for y:");
  scanf("%d",&y);
    printf("Provide input for m:");
  scanf("%d",&m);

      printf("Provide input for n:");
  scanf("%d",&n);
  
  result=m*n+-x/y;
  printf("%f\n",result);
  
}
