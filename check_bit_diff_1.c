//WAP to check the bit diff btw two numbers is only 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
unsigned int A,B,t1,t2;
printf("enter the num A\n");
scanf("%d",&A);
printf("enter the num B\n");
scanf("%d",&B);
int count1=0,count2=0,i;
for(i=0;i<32;i++) 
 {
  A>>i & 1 ? count1++ : 0;
  B>>i & 1? count2++ : 0;
 } 
//printf("%d %d\n",count1,count2);
(abs(count1-count2)==1)?printf("yes\n") :printf("no\n") ;

return 0;
}
