#include<stdio.h>
int main()
{int year ;     //定义年份的变量 
scanf("%d",&year);//读取年份
int is_leap(int year);//声明函数
int b=is_leap( year);//调用函数
if(b==0)
printf("不是闰年");
else
printf("是闰年");    //得出结果
return 0 ;
 
}
int is_leap( int year){int c,d;//储存余数
c=year%400;//先判断能不能被400整除 
 if(c==0)d=1; //能的话是闰年 
    else{c=year%4;//判断能不能被4整除
	    
    if(c==0){c=year%100;//判断能不能被100整除 
    if(c==0)d=0;//可以被100整除就令d=0 
    else d=1;//能被4整除还不能被100就直接是闰年 
	} 
	else d=0;//不能被4整除也不是闰年 
}
 
 return d;
}
