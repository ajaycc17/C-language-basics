#include<stdio.h>
#include<string.h>
void main()
{
  char c;
  int a,h=3,i=2;
  short int b;
  long int d;
  float e;
  double f,j;
  long double g;
  
  int size;
  size=sizeof(c)*8;                                     //a
  printf("For char variable:%d\n",size);
 
  size=sizeof(a)*8;
  printf("For int variable:%d\n",size);
      size=sizeof(b)*8;
    printf("For short int variable:%d\n",size);
    size=sizeof(d)*8;
    printf("For long int variable:%d\n",size);
    size=sizeof(e)*8;
    printf("For float variable:%d\n",size);
   size=sizeof(f)*8;
    printf("For double variable:%d\n",size);
    size=sizeof(g)*8;
    printf("For long double variable:%d\n",size);

    j=h;                                                    //b
    j=j/i;
    printf("Value of j=%f\n",j);

    printf("Characters as Integers\n");                       //c
    int k='a';
    printf("a=%d\n",k);
     k='"';
     printf("%d\n",k);
      k='%';
      printf("%d\n",k);
      k='\\';
       printf("%d\n",k);
       k='\'';
        printf("%d\n",k);
	 k='0';
	 printf("%d\n",k);
	  k='A';
	  printf("%d\n",k);

	  char l=97;                                     //d
	printf("%s\n",&l);

	int m=3,n;                     //e
	n= m<<1;
	printf("%d\n",n);
		n= m>>1;
	printf("%d\n",n);

	int o=3,p;                                 //f
		p= o++;
	printf("%d\n",p);
	o=3;
		p= ++o;
	printf("%d\n",p);


	const int q=5;                                 //g
	printf("Insert a value for q:");
	scanf("%d",&q);

	printf("The new value of q is:%d\n",q);

	printf("Character array\n");                           //h
   	char week[7][20]={                   
	  "Monday",
	  "Tuesday",
	  "Wednesday",
	  "Thursday",
	  "Friday",
	  "Saturday",
	  "Sunday"};
	for(int i=0;i<=7;++i)
	  printf("%s\n",week[i]);
	
}
