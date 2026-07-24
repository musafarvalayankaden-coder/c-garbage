#include<stdio.h>
int main()
{
unsigned int num,set,t1=1,count=0;
printf("enter the num\n");
scanf("%d",&num);

//input // 0011 0010 //50
//output //3
int i;
for(i=0;i<32;i++)
  {
   num>>i & 1 ?count++:0;
  }  
printf("the number of set bits:%d\n",count);

return 0;
}
