#include<stdio.h>
int main()
{
unsigned char opt,a=0,i,test,reg=0,f1;

printf("-----------------------\nMini 8-bit Register Simulator\n-----------------------\n");
begin:
printf("choice:\n");
printf("1.for set a bit\n2.for clear a bit\n3.for toggle a bit\n4.for read a bit\n5.for printing  the register value \n6.for exit\n");
printf("\nselect a choice:\n");
scanf("%hhd",&a);
if(a>4 || a<=0)
{
goto next;
}
printf("enter the bit:\n");
scanf("%hhd",&opt);

if(a==1)
 {
 reg=(reg|1<<opt);
 printf("-----done-----\n");
 }
else if(a==2)
{
 reg=(reg & ~1<<opt);
printf("-----done-----\n");
}
else if(a==3)
{
reg=(reg ^ 1<<opt);
printf("-----done-----\n");
}
else if(a==4)
{
test=(reg>>opt & 1);
printf("\n\n---------------\noutput\n-------------------\n");
test==1?printf("\nthe bit %d is(1) set (on)\n",opt):printf("\nthe bit %d is clear(0) off\n",opt);
} 
else 
next:
 if(a==5)
{
printf("\n\n------------------\noutput\n-------------------\n");
printf("register: \nDecimal:%d\nHex: %x\n",reg,reg);
printf("binary:");
for (int i = 7; i >= 0; i--)
    {
        printf("%d", (reg >> i) & 1);
    }

    printf("\n");

}
else if(a==6)
{
goto exit;
}
else if(a==0||a<1|| 6<=a || 0>opt<8) 
{
  printf("<<<<<<<<<output>>>>>>>>>>>>\n");
  printf("\ninvalid choice\n");
  goto exit; 
 }
else 
1234;
next2:
printf("\n\nenter: \n (1) for continue \n (2) for exit\n");
scanf("%hhd",&f1);
if(f1==1)
{
printf("\n<<<<<<again>>>>>>>\n");
goto begin;
}
else if (f1==2)
{
goto exit;
}
else
{ printf("\ninvalid command\n");}
exit:
return 0;
}
