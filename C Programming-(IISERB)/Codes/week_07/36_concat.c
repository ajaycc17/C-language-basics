#include<stdio.h>
void main()
{
  char str1[10];
  char str2[10];
  char str3[10];
  int i,j,k;
  puts("enter the first name\n");
  gets(str1);
  puts("enter the middle name\n");
  gets(str2);
  puts("enter the last name\n");
  gets(str3);
  
  for(i=0;i<=str1[i]!= '\0';i++)
    {
      printf("%c",str1[i]);
    }
  printf(" ");
  for(j=0;j<=str2[j]!= '\0';j++)
    {
      printf("%c",str2[j]);
    }
  printf(" ");
  for(k=0;k<=str3[k]!= '\0';k++)
    {
      printf("%c",str3[k]);
    }
      
}

    
