#include <stdio.h>
int main()
{long long int a ; //定义a作为输入量
 scanf ("%lld",&a);
 long long factorial(int b); //声明函数 
long long  int d=factorial(a);//返还结果 
  printf ("%lld",d);//输出结果 
 }
 long long factorial(int b){int i=b;
 long long  int h=1;//定义两个自变量 
  
  for(;i>0;i--){h*=i;//直接进行计算 
 // printf("%d",h); 
  }return h;
 }
