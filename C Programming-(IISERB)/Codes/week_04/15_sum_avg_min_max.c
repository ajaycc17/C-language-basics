#include <stdio.h>
#include<stdlib.h>
void main()
{
    int count=0,sum=0,min=0,max=0,x=0;
    float num,avg;
    char ans='y';
    while(ans=='y')
    {
        printf("Put the number:");
        scanf("%f", &num);
        printf("Want to put more numbers?(y/n):");
        scanf("%s", &ans);
        sum+=num;
        count=count+1;

        if(x==0)
        {
            min=num;
            x=1;
        }

        if(num>=max)
            max=num;

        if(num<=min)
            min=num;
    }
    avg=(sum/count);
    printf("The Sum of the numbers provided is:");
    printf("%d\n",sum);

    printf("The Average of the numbers provided is:");
    printf("%.2f\n",avg);

    printf("The Minimum of the numbers provided is:");
    printf("%d\n",min);

    printf("The Maximum of the numbers provided is:");
    printf("%d\n",max);

}
