#include<stdio.h>
int main(){
  float a,b,c,max,middle,min;
  scanf("%f%f%f",&a,&b,&c);
  if (a>b)
    {max=a;
     min=b;}
  else
	{max=b;
	 min=a;};
  if (max<c)
    {middle=max;
  	 max=c;}
  else
    {if (min>c)
      {middle=min;
  	   min=c;}
	 else
	   middle=c;}
  printf("%f\t%f\t%f",max,middle,min);
  return 0;
}
