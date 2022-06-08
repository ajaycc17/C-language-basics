#include<stdio.h>
void main()
{
  float amount=1000;
  float interest_rate=0.12;

  float amount_1st_year=amount+interest_rate*amount;
  printf("amount after 1st year:%6.2f\n",amount_1st_year);

  float amount_2nd_year=amount+interest_rate*amount*2;
  printf("amount after 2nd year:%6.2f\n",amount_2nd_year);
}
