#include <stdio.h>
int main()
{int number[10];
int b;
double sum=0 ;
double averge;
int i=0;
int cnt;

do{scanf("%d",&b);
if(b==-1)
break;
else
{sum+=b;
number[i]=b;

i++;
}}while(i<10);

averge=sum/i;
printf("%f\n",averge);
for(cnt=0;cnt<i;cnt++){if(number[cnt]>averge)
printf("%d\n",number[cnt]);
}
return 0;
 } 
