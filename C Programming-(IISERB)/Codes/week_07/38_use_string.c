#include<stdio.h>
#include<string.h>
void main()
{
  char str1[15] = "operating";
  char str2[15] = "systems";
  char str3[15];
  char str4[15] = "ubantu";
  char str5[10] = "qwerty";
  char str6[10] = "werthfp";
  strcpy(str3,str1);
  puts(str3);
  printf("\n");
  int i = strlen(str1);
  int j = strlen(str2);
  printf("length of string1 is %d\n", i);
  printf("length of string2 is %d\n",j);
  strcat(strcat(str1,str2),str4);
  puts(str1);
  printf("\n");
  int a=strcmp(str1,str2);
  printf("%d\n",a);
  strncpy(str1,str2,5);
  puts(str1);
  printf("\n");
  int b=strncmp(str1,str4,7);
  printf("%d\n",b);
  strncat(str2,str4,5);
  puts(str2);
  printf("\n");
  char c= strstr(str5,str6);
   printf("%s\n",c);
}
