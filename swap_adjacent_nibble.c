#include<stdio.h>
int main()
{
unsigned int num,t1,t2;
printf("enter the num\n");
scanf("%x",&num);

// AB CD EF 12   //BA DC FE 21

t1=num&0x0f0f0f0f;
t1=t1<<4;
t2=num&0xf0f0f0f0;
t2=t2>>4;
num=t1|t2;
printf("the num:%x\n",num);
return 0;
}
