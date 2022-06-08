#include <stdio.h>
#define square(x) x*x

int main()
{
        int x,y;
        int sum_x =0;
        int sum_y = 0;
        int sum_xy =0;
        int sum_xx = 0;
        
    printf("How many points you want to enter:");
    int pnt;
    scanf("%d",&pnt);
    for(int i=0;i<pnt;++i){
        
        printf("Put the value of x%d:",i+1);
        scanf("%d",&x);
        printf("Put the value of y%d:",i+1);
        scanf("%d",&y);
        sum_x += x;
        sum_y += y;
        sum_xy += x*y;
        sum_xx += x*x;
       
    }
     int sum_x2 = square(sum_x);
    double m = ((pnt*sum_xy) -(sum_x*sum_y))/((pnt*sum_xx)-(sum_x2));
    printf("The slope is m= %lf\n",m);
    double c = (sum_y - (sum_x)*m)/pnt;
    printf("The intersect is c=%lf\n",c);

    return 0;
}
