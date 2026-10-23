#include<stdio.h>
int main ()
{int a;
int b;
int i=2;
scanf("%d",&a);
int isprime=1;
for(;i<a;i++){b=a%i;
if(b==0){
isprime=0;
break;}
}if(isprime==0)
printf("不是素数");
else
printf("是素数");
return 0;
}
