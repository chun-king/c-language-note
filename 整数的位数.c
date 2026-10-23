#include <stdio.h>
int main ()
{int  a;
scanf("%d",&a);
int i=0;
int b;
do{b=a%10;
printf("%d",b);
a/=10;
i++;
}while(a!=0);
printf("\n%d",i);
return 0;

}
