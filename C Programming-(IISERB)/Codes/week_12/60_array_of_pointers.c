#include<stdio.h>
void main()
{
  int i;
  char array[3][30]={"India","United States Of America","Switzerland"};
  printf("%d\n",sizeof(array));
  char *p[3];
  for(i=0;i<3;i++)
    printf("%s\n",array[i]);
  for(i=0;i<3;i++)
    p[i]=&array[i];
  for(i=0;i<3;i++)
    printf("%s\n",p[i]);
  printf("%d\n",sizeof(p));
  for(i=0;i<3;i++)
   printf("%s\n",array[i]+5);
  for(i=0;i<3;i++)
   printf("%s\n",p[i]+5);
 for(i=0;i<3;i++)
   printf("%s\n",array[i]+6);
  for(i=0;i<3;i++)
  printf("%s\n",p[i]+6);
}

