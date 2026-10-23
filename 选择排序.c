#include<stdio.h>
int main ()
{int a[10];
int n=sizeof(a)/sizeof(a[0]);
int i,j,min,t;
for(i=0;i<10;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++){min=i;
for(j=i+1;j<n;j++){
if(a[j]<a[min])
min=j;
}

if(min!=i)
{t=a[i];a[i]=a[min];a[min]=t;
}
for(i=0;i<10;i++){printf("%d  ",a[i]);
}}

return 0;
 } 
