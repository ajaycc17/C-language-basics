#include<stdio.h>
#include<stdlib.h>

struct student
{
  char name[20];
  int roll;
};

typedef struct student st_st;

void main()
{
  printf("Enter the number of students: ");
  int n,i;
  scanf("%d",&n);
  st_st* ptr;

  ptr=(st_st*)calloc(n,sizeof(st_st));

  for(i=0;i<n;i++)
    {
      printf("Enter the name of the student %d: ",i+1);
      scanf("%s",(ptr+i)->name);

      printf("Enter the roll number of the student %d: ",i+1);
      scanf("%d",&(ptr+i)->roll);

    }

  printf("\n");
  
  for(i=0;i<n;i++)
    {
      printf("The name of the student %d is %s\n",i+1,(ptr+i)->name);

      printf("The roll number of the student %d is %d\n",i+1,(ptr+i)->roll);
      printf("\n");
    }
}
  
