#include<stdio.h>
void main()
{
  float amount1=0.5;
  float amount2=0.25;
  float amount3=0.75;
  float amount4=0.875;
  float amount5=0.1;
  float amount6=0.2;
  float amount7=0.8;
  float amount8=0.9;
  printf("amount(exactly stored): %11.10f,%11.10f,%11.10f,%11.10f\n",amount1,amount2,amount3,amount4);

  printf("amount(not exactly stored): %11.10f,%11.10f,%11.10f,%11.10f\n",amount5,amount6,amount7,amount8);
}
