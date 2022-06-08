#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

void main()
{
  char *ptr;
  ptr=(char*)malloc(sizeof(char)*20);

  printf("Enter the name: ");
  char nam[20];

  scanf("%s",nam);

  strcpy(ptr,nam);


  printf("%s\n",ptr);

  printf("%ld\n",malloc_usable_size(ptr));

  ptr=(char*)realloc(ptr,64);

  printf("%ld\n",malloc_usable_size(ptr));
}
