#include<stdio.h>

struct inventory
{
  char code[10];
  int quan;
  float price;
  float value;
};

typedef struct inventory st_in;

void main()
{
  st_in* ptr;
  int n,i;
  printf("Enter the number of items for which inventory report is required\n");
  scanf("%d",&n);
  
  st_in items[n];

  ptr=&items[0];
float total=0;

  for(i=0;i<n;i++)
    {
      printf("Enter the code of the item\n");
      scanf("%s",(ptr+i)->code);

      printf("Enter the quantity of the item\n");
      scanf("%d",&(ptr+i)->quan);

      printf("Enter the price of the item\n");
      scanf("%f",&(ptr+i)->price);

      (ptr+i)->value=((ptr+i)->quan)*((ptr+i)->price);
total=total+(ptr+i)->value;
    }

  for(i=0;i<46;i++)
     printf("-");

  printf("\n");

  printf("Code        Quantity        price        Value\n");

   for(i=0;i<46;i++)
     printf("-");

  printf("\n");


  for(i=0;i<n;i++)
    {
      printf("%4.4s",(ptr+i)->code);

      printf("%+16d",(ptr+i)->quan);

      printf("%+13.2f",(ptr+i)->price);

      printf("%13.2f",(ptr+i)->value);

      printf("\n");
    }
printf("\t\t\t   Total:%13.2f",total);
}
    
