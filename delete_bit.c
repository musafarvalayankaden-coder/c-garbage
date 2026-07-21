#include<stdio.h>
int main()
{
unsigned int num,r,num1, pos1,pos2,pos3;
printf("enter the value\n");
scanf("%d",&num);
printf("enter the pos1\n");
scanf("%d",&pos1);
//printf("enter the pos2\n");
//scanf("%d",&pos2);
//printf("enter the pos3\n");
//scanf("%d",&pos3);

r=num<<31-(pos1-1);
r=r>>31-(pos1-1);

num1=num>>(pos1+1);
num1=num1<<(pos1);

num=num1|r;

//num1=num>>pos1+1;
//num=num1<<pos1;
//num2=num>>pos1+1;
//num=num2<<pos1;
printf("the new number %d\n",num);


return 0;
}
