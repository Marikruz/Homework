#include<stdio.h>
int main(){
  int n,x,y,z;
  scanf("%d",&n);
  x=n%100;
  y=n%4;
  z=n%400;
  if (x!=0)
    {if (y==0)
       printf("%d������\n",n);
       else
         printf("%d��������\n",n);} 
  else
    {if (z==0)
	   printf("%d������\n",n);
	   else
	     printf("%d��������\n",n);}
  return 0;
}
