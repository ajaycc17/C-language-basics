#include<stdio.h>
void main()
{
  int a=1234;
  float b=98.765,c=321.65;
  char ch[25]="NEW DELHI 110001\n";
  printf("%d\n,%6d\n,%2d\n,%-6d\n,%06d\n,%+6d\n,%+-6d\n",a,a,a,a,a,a,a);
  printf("%-10.2e\n,%g\n",b,c);
  printf("%s\n%20s\n%20.10s\n%.5s\n%-20.10s\n%5s\n",ch,ch,ch,ch,ch,ch);
printf(" \"Well done\"");
}
