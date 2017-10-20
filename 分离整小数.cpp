#include<stdio.h>
int main()
{
	float a,x;
	printf("请输入一个小数\n");
	scanf("%f",&a);
	int z;
	z=a;
	x=a-z;
	printf("整数部分为%d\t小数部分为%f\n",z,x);
	return 0;
}

