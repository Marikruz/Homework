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
/*��forѭ���ĳ�whileѭ�������ߵȼ�
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

/*����ѧ�߼���1�ĸ��� 
  int f(int n) //�ݹ麯�� 
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
