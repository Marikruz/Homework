#include<stdio.h>
int main()
{
	float a;
	printf("请输入一个小数\n");
	scanf("%f",&a);
	int b,x;
	b=a;
	x=(a-b)*10;
	if (x>=0 and x<5)
	  printf("四舍五入为：%d",b);
	  else printf("四舍五入为：%d",b+1);
	  return 0;
}

