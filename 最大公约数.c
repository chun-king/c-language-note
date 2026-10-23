#include<stdio.h>
int main ()
{int a,b;
int min(int x,int y );
scanf("%d %d",&a,&b);
int i=min( a, b);
int c,d;
for(;i>0;i--){
c=a%i;
d=b%i;	
	
if(c==0&&d==0)
break;

}

printf("%d",i);
return 0;

}
int min(int a,  int b){
if(a>b)
return b;
else
return a;
}
