#include<stdio.h>
void print_array(int l,int *p);
void sort(int l,int *p);
void main()
{
  int i;
  int arr[4]={45,90,71,83};
  printf("array before sorting: ");
  print_array(4,arr);
  printf("\n");
  sort(4,arr);
   printf("array after sorting: ");
  print_array(4,arr);
  printf("\n");
}
void print_array(int l,int *p)
{
  int i;
  for(i=0;i<l;i++)
      printf("%d ",p[i]);
}
void sort(int l,int *p)
{
  int i,j,t;
  for(i=0;i<l-1;i++)
    for(j=0;j<l-1;j++)
      if(*(p+j) > *(p+j+1))
	{
	  t= *(p+j);
	  *(p+j) = *(p+j+1);
	  *(p+j+1) = t;
	}
}
      
  
