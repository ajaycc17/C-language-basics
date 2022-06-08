#include<stdio.h>
#include<string.h>
int palin(char c[50],int l)
{
int i;
char a[50],k=0;
if(l<=0)
return 1;

    while (l-1 > k) 
    { 
        if (c[l++] != c[h--]) 
        { 
            printf("%s is Not Palindrome", c); 
           return palin(c,l-2); 
        } 
    }
 
else
return 0;
}
void main()
{
char c[50];
int l;
printf("Enter a string to check if it is palindrome\n");
gets(c);
l=strlen(c);
if(palin(c,l)==0)
printf("It is not a palindrome");
else printf("It is a palindrome");

}
