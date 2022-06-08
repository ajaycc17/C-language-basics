 #include<stdio.h>
#include<string.h>
void main()
{
  char str1[3];
  char str2[3];
  int i;
 puts("enter the characters\n"); 
  gets(str1);
 
  for(i=0;str1[i]!= '\0';i++)
    {
      str2[i]  = str1[i];
    }
  puts(str2);
  
  printf("%d\n",i);
}
