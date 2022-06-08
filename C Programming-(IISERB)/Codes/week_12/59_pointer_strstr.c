#include<stdio.h>
#include<string.h>
void main()
{
  int c=0;
    char* string1="abbacdbadce";
    char* string2="ba";
    char* string3=string1;
   
    while((string3=strstr(string3,string2))!=NULL)
      {
        string3+=strlen(string2);
	c++;
      }
    
	  if(c==0)
      printf("occurence not found\n");
     else
    printf("no of occurences:%d\n",c);
}
