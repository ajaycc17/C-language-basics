#include<stdio.h>
#include<math.h>
double table(double (*p)(),double start,double end,double step);
double table1(double (*p1)(),double start,double end,double step);
double cosd(double angle);
double sind(double angle);
double y(double x);
double y2(double x1,double x2);
#define PI 180
void main()
{
  double (*p2)(double);
  p2=&cosd;
printf("table of y(x)=cos(x)\n");
    table(cosd,0,PI,PI/4);
     double (*p3)(double);
  p3=&sind;
    printf("table of y(x)=sin(x)\n");
    table(sind,0,PI,PI/4);
  double (*p)(double);
  p=&y;
     printf("table of y(x)=x*x\n");
      table(y,0.0,2.0,0.5);
      double (*p1)(double,double);
  p1=&y2;
    printf("table of y(x)=x1*x1+x2*x2\n");
    table1(y2,0.0,2.0,0.5);
}
double cosd(double angle)
{
  return cos(angle*(3.14/PI));
}
double sind(double angle)
{
  return sin(angle*(3.14/PI));
}
double y(double x)
{
  return x*x;
}
double y2(double x1,double x2)
{
  return x1*x1+x2*x2;
}


double table(double (*p)(),double start,double end,double step)
{
  double val;
  for(double x=start;x<=end;x+=step)
    {
      val=(*p)(x);
      printf("%10.6f %10.6f\n",x,val);
    }
}

double table1(double (*p1)(),double start,double end,double step)
{
 double val;
 for(double x1=start,x2=start;x1<=end,x2<=end;x1+=step,x2+=step)
    {
      val=(*p1)(x1,x2);
      printf("%10.6f %10.6f %10.6f\n",x1,x2,val);
    }
}

  
