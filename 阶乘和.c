#include <stdio.h>
int main ()
{int x;
int b=1;
int a;
int sum=0;
scanf("%d",&x);

for(a=1;a<=x;a++){b*=a;
sum+=b;
//printf("%d %d %d\n",a, b ,sum);

}printf ("%d\n",sum); 


return 0;
 } 
