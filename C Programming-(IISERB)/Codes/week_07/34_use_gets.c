#include<stdio.h>
#include<string.h>
void main()
{
  char str1[10];
  char str2[0] = "\0";
  printf("Enter the character\n");
  gets(str1);
  puts(str1);
  strcat(str1,str2);
  puts(strcat(str1,str2));
  
  
}
