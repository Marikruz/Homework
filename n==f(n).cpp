#include<stdio.h>

int sum1(int x){
  int ge,sum=0;
  do {
  	ge=x%10;
  	x=(x-ge)/10;
  	if (ge==1) sum+=1;
  }
  while (x!=0);
  return sum;
}

int main(){
  int sum=0;
  for (int i=1;i!=sum;i++)
    sum +=sum1(i);
/*将for循环改成while循环，两者等价
  int sum=0,i=1;
  while(i!=sum)
    {
      sum+=sum1(i);
      i+=1;
	}
  */
  printf("%d\n",sum);
  return 0;
}

/*用数学逻辑求1的个数 
  int f(int n) //递归函数 
  {
    if(n==1)
      return 1;
    return f(n-1)+sum1(n);
  }
  
  int main(){
    while(i!=f(i))
      i+=1;
  }
*/ 
