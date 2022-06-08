#include<stdio.h>
#include<ctype.h>
void main()
{
printf("Enter a character\t");
char c;
c=getchar();
if(isalpha(c))
{
printf("It is a letter.Its toggled form is\t");
if(islower(c))
  {
c=toupper(c);
 putchar(c);
  }
 else
   {
c=tolower(c);
 putchar(c);
   }
}
else if(isdigit(c))
printf("%c is a digit\t",c);
else
printf("It is not an alphanumeric character");
}

