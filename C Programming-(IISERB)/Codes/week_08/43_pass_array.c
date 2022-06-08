#include<stdio.h>
int sort(int a[], int n);
void main()
{
  int n;
  printf("Enter the size of the array:");
  scanf("%d",&n);
  int a[n],c[n];
  printf("enter the values of the array:\n");
  for(int i=0;i<n;++i)
    {
      printf("Enter the value in %d row:",i+1);
      scanf("%d",&a[i]);
    }
  
  printf("The array before sorting is:\n");
  for(int i=0;i<n;++i)
    {
      printf("%d\n",a[i]);
    }

 c[n]=sort(a,n);
}

int sort(int b[],int x)
{ int temp,min;
  for(int i=0;i<x-1;++i)
    for(int j=i+1;j<x;++j)
      {
	min=b[i];
	if(b[j]<min)
	  {
	    temp=b[i];
	    b[i]=b[j];
	    b[j]=temp;
	    
	  }
      }
  return b[x];
}
