#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter the Number(x): ");
    scanf("%d",&x);
    printf("x/2:%d\n",x/2);
    if((x/2)*2==x)
        printf("x:%d is even",x);
    else
        printf("x:%d is odd", x);
    return 0;
}
