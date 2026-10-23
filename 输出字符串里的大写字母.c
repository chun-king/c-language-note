#include<stdio.h>
#include<string.h> 
int main()
{char s[105];
scanf("%s",s);
int cnt=0;
int i;
for (i=0;s[i]!='\0';i++){if(s[i]>'A'&&s[i]<'Z')
cnt++;
}
printf("%d",cnt);
return 0;

}
