//WAP to rotate the num by right shifting
//input>> 0000 1001   output>> 0100 0010

#include<stdio.h>
int main()
{
unsigned char num,a,b,pos;
printf("enter the num\n");
scanf("%hhu",&num);
printf("enter the pos\n");
scanf("%hhu",&pos);
a=num>>pos;
b=num<<8-pos;
num=a|b;
printf("the new number is:%hhu\n",num);


return 0;
}
