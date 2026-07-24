//WAP to reverse bits
#include<stdio.h>
int main()
{
unsigned int num,t1,t2=0x00000000,i;
printf("enter the num:\n");
scanf("%d",&num);
//input   0000 0000 ...... 0000 1101
//output  1011 0000....... 0000 0000

for(i=0;i<32;i++)
    {
   t1 = (( num>>i & 1 ) << 31-i);
   t2 = t1 | t2 ;
    }
printf("the new number= %u\n",t2);

return 0;
}
