#include<stdio.h>

int main()
{	
    double function1(double a,double b,double c,double d,double m,double n,double x,double y),
           function2(double a,double b,double c,double d,double m,double n,double x,double y),e,f,g;
	double a,b,c,d,m,n,x,y; 
	printf("请输入x y前面的系数以及m n的值\n");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m,&n);
	e=a/c;
	f=b/d;
	g=m/n;
	if (e==f and f==g)
	{
	   printf("有无穷多组解\n");
       return 0;
    }
    else
    {
       if (e==f and f!=g)
       {
       	  printf("无解\n");
       	  return 0;
	   }
	   else
	   {
          x=function1(a,b,c,d,m,n,x,y);
          y=function2(a,b,c,d,m,n,x,y);
          printf("x值为%lf,y值为%lf\n",x,y);
	      return 0;
	   }
    }
 }

double function1(double a,double b,double c,double d,double m,double n,double x,double y)
{
	x=(m*d-b*n)/(a*d-b*c);
	return x;
}

double function2(double a,double b,double c,double d,double m,double n,double x,double y)
{
	y=(m*c-a*n)/(b*c-a*d);
	return y;
}
