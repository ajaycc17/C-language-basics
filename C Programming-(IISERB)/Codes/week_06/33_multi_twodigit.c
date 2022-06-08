#include<stdio.h>
void main()
{int w,x,y,z;
printf("Enter the digits    ");
scanf("%d%d", &w,&x);
y=x/10;
z=x%10;
printf("                     %d\n",w);
printf("x                    %d\n",x);
printf("__________________________\n");
printf("%d x %d is           %d\n",z,w,w*z);
printf("%d x %d is          %d\n",y,w,w*y);
printf("__________________________\n");
printf("add                %d\n",w*x);}
