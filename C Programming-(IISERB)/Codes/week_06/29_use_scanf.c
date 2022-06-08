#include<stdio.h>
void main()
{
  char a[15];
  int c,b,e;
  float d;
  printf("Enter your name.\n");
  scanf("%15[a-z,A-Z, ]s",a);  
  printf("%s is a beautiful name indeed.\n",a);
  printf("Enter a 2 digit number and 5 digit number\n");
  scanf("%2d %5d",&c,&b);
  printf("\n");
  printf("%d %d\n",c,b);
  printf("Enter 5 digit and 2 digit number.\n");
  scanf("%2d %5d",&c,&b);
  printf("\n%d %d\n",c,b);
  printf("enter an integer.\n");
  scanf("%d",&c);
  printf("Enter a float.\n");
  scanf("%f",&d);
  printf("\n%f\n",d);
  scanf("%d%*c%d%*c%d",&c,&b,&e);
  printf("%d %d %d",c,b,e);
}

