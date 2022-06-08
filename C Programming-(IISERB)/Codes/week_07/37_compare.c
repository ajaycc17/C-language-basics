#include<stdio.h>
void main()
{
  char str1[10];
  char str2[10];
  gets(str1);
  gets(str2);
  int i;

  for(i=0;str1[i]!= '\0';i++)
    {
      if(str1[i]==str2[i])
	{
	  printf("the characters are equal\n");
	 }
      else
	{
	  printf("the characters are not equal\n");
	}
    }
}
  
