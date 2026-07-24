#include<stdio.h>
int main()
{
unsigned int num,t1,t2,t3,r=0x00000000;
printf("enter the num\n");
scanf("%x",&num);

t1=num<<28;
t2=num>>28;
t3=num<<4;
t3>>=8;
t3<<=4;
r= t1 | t2 | t3 ; 
printf("the new num:%x\n",r);

return 0;
}
