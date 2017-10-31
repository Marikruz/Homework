#include<stdio.h>
int main(){
  float x,y;
  void bigger(float a,float b);
  printf("请输入两个数\n");
  scanf("%f %f",&x,&y);
  bigger(x,y); 
  return 0;
}
void bigger(float a,float b)
{
  if (a>b||a==b)
    printf("the bigger is %f",a);
    else
      printf("the bigger is %f",b);
}
