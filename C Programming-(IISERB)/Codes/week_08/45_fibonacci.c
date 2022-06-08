#include<stdio.h>
int fibo(int i)
{
if(i==0)
return 0;
else if(i==1)
return 1;
else
return (fibo(i-2)+fibo(i-1));
}
void main()
{
int a[100],n,i;
printf("How many fibonacci numbers do you want to generate\n");
scanf("%d",&n);
for(i=0;i<n;i++)
a[i]=fibo(i);
printf("The first %d numbers of Fibonacci series are\n",n);
for(i=0;i<n;i++)
printf("%d\n",a[i]);

}
