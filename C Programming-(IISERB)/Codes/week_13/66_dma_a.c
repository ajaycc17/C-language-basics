#include<stdio.h>
#include<stdlib.h>

void main()
{
  printf("Enter the number of elements in the array: ");
  int n,i;
  scanf("%d",&n);
printf("\n********************************************\n");
  int* ptr;
  ptr=(int*)malloc(n*4);

  for(i=0;i<n;i++)
    {
      printf("Enter the element of the array: ");
      scanf("%d",(ptr+i));
    }

  for(i=0;i<n;i++)
    {
      printf("The address of the element %d is: %lu\n",*(ptr+i),(unsigned long int) (ptr+i));
    }

  free(ptr);

  printf("The element at 2nd position is: %d\n",*(ptr+1));

    }
  
