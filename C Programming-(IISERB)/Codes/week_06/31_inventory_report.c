#include<stdio.h>
void main()
{
float total=0.0;
int i;
struct report
{
char code[10];
int qty;
float r;
float val;
}a[4];
for(i=1;i<=4;i++)
{
printf("Enter the data of %d row\n",i);
scanf("%c",&a[i].code);
scanf("%d",&a[i].qty);
scanf("%f",&a[i].r);
a[i].val=a[i].qty*a[i].r;
total+=a[i].val;
}
printf("\n------------------------------------------------\n");
printf("CODE\tQUANTITY\tRATE\tVALUE");
printf("\n------------------------------------------------\n");
for(i=1;i<=4;i++)
printf("%c\t%d\t%f\t%f\n",a[i].code,a[i].qty,a[i].r,a[i].val);
printf("Total=%f",total);
}
