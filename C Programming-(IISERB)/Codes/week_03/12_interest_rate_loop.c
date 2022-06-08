#include<stdio.h>
#include<math.h>

void main()
{
    float amt=1000;
    float rate=0.12;
    int year=1;
    float interest=amt*rate*year;
    printf("For the scheme with Compound Interest\n");
    while(year<=10)
    {
        amt=amt+(amt*rate*year);
        printf("Amount after %d year:%f\n",year,amt);
        year=year+1;
    }
    printf("For the Scheme with Simple Interest\n");
    amt=1000;
    year=1;
    while(year<=10)
    {
        amt=amt+interest*year;
        printf("Amount after %d year:%f\n",year,amt);
        year=year+1;
        amt=1000;

    }
}
