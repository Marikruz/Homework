#include<stdio.h>
int main(){
	float x,y;
	float jugement(float a,float b);
	printf("请输入两个数\n");
	scanf("%f %f",&x,&y);
	jugement(x,y);
	return 0;
}
void jugement(float a,float b)
{
	if (a==b)
	  printf("两数相等\n");
	  else
	    printf("两数不相等\n"); 
}
