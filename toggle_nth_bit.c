#include<stdio.h>
int main()
{
int num,pos;
printf("enter the num\n");
scanf("%d",&num);
printf("enter the pos\n");
scanf("%d",&pos);

num=num^(1<<pos);

printf("%d\n",num);

return 0;
}

//num-10 pos-1  output-8  //1st bit toggled  0000 1010 ->>>> 0000 1000 
