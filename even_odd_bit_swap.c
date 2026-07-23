#include<stdio.h>
int main()
{
unsigned int num,odd,even;
printf("enter the number\n");
scanf("%d",&num);

odd=num & 0x55555555;
even=num & 0xAAAAAAAA;

odd=odd<<1;
even=even>>1;

num=odd | even;

printf("swaped num %d\n",num);



return 0;
}

