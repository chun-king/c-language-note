#include<stdio.h>
int main()
{int m, i,j;
scanf("%d",&m);
for(i=1;i<=m;i++){
	for(j=1;j<=m;j++){
		printf("%d*%d=%d\t",j,i,i*j);
	}printf("\n");
}
return 0; 
}
